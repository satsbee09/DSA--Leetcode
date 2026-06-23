class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int ans = 0;

        for(int top = 0; top < rows; top++) {

            vector<int> colSum(cols, 0);

            for(int bottom = top; bottom < rows; bottom++) {

                // Build 1D array
                for(int col = 0; col < cols; col++) {
                    colSum[col] += matrix[bottom][col];
                }

                // LC 560 on colSum
                unordered_map<int,int> mp;
                mp[0] = 1;

                int prefixSum = 0;

                for(int x : colSum) {

                    prefixSum += x;

                    if(mp.find(prefixSum - target) != mp.end()) {
                        ans += mp[prefixSum - target];
                    }

                    mp[prefixSum]++;
                }
            }
        }

        return ans;
    }
};