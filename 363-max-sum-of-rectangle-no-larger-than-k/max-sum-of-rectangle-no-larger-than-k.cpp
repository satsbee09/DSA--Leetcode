class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int ans = INT_MIN;

        // Fix top row
        for (int top = 0; top < rows; top++) {

            vector<int> colSum(cols, 0);

            // Extend bottom row
            for (int bottom = top; bottom < rows; bottom++) {

                // Build compressed 1D array
                for (int c = 0; c < cols; c++) {
                    colSum[c] += matrix[bottom][c];
                }

                // Find max subarray sum <= k
                set<int> prefix;
                prefix.insert(0);

                int sum = 0;

                for (int x : colSum) {

                    sum += x;

                    auto it = prefix.lower_bound(sum - k);

                    if (it != prefix.end()) {
                        ans = max(ans, sum - *it);
                    }

                    prefix.insert(sum);
                }
            }
        }

        return ans;
    }
};