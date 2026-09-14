class Solution {
private:

    // Generate all possible subset sums
    // grouped according to number of elements selected
    void func(int ind,
              int end,
              int count,
              long long sum,
              vector<int>& nums,
              vector<vector<long long>>& dp) {

        // All elements of this half processed
        if (ind == end) {
            dp[count].push_back(sum);
            return;
        }

        // NOT TAKE
        func(ind + 1,
             end,
             count,
             sum,
             nums,
             dp);

        // TAKE
        func(ind + 1,
             end,
             count + 1,
             sum + nums[ind],
             nums,
             dp);
    }

public:

    int minimumDifference(vector<int>& nums) {

        int N = nums.size();
        int n = N / 2;

        long long total = 0;

        for (int x : nums) {
            total += x;
        }

        /*
            left[count]
            = all subset sums obtained by
              selecting exactly 'count'
              elements from left half.

            right[count]
            = same for right half.
        */

        vector<vector<long long>> left(n + 1);
        vector<vector<long long>> right(n + 1);

        // Generate left half
        func(0, n, 0, 0, nums, left);

        // Generate right half
        func(n, N, 0, 0, nums, right);

        // Sort right side for binary search
        for (int count = 0; count <= n; count++) {
            sort(right[count].begin(),
                 right[count].end());
        }

        long long ans = LLONG_MAX;

        /*
            Select 'count' elements from left.

            Therefore we need:

            n - count

            elements from right.
        */

        for (int count = 0; count <= n; count++) {

            int need = n - count;

            for (long long leftSum : left[count]) {

                /*
                    We want:

                    leftSum + rightSum ≈ total / 2

                    Therefore:

                    rightSum ≈ total/2 - leftSum
                */

                long long target =
                    total / 2 - leftSum;

                auto &v = right[need];

                // First value >= target
                auto it = lower_bound(
                    v.begin(),
                    v.end(),
                    target
                );

                // Check current value
                if (it != v.end()) {

                    long long sum1 =
                        leftSum + *it;

                    long long diff =
                        llabs(2 * sum1 - total);

                    ans = min(ans, diff);
                }

                // Check previous value
                if (it != v.begin()) {

                    --it;

                    long long sum1 =
                        leftSum + *it;

                    long long diff =
                        llabs(2 * sum1 - total);

                    ans = min(ans, diff);
                }
            }
        }

        return (int)ans;
    }
};
