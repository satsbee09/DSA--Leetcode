class Solution {
public:
    int solveUsingMem(int i, int j, vector<vector<int>>& dp) {
        // Base case
        if (i == 0 && j == 0)
            return 1;

        // Outside the grid
        if (i < 0 || j < 0)
            return 0;

        // Already calculated
        if (dp[i][j] != -1)
            return dp[i][j];

        // Up + Left
        return dp[i][j] =
            solveUsingMem(i - 1, j, dp) +
            solveUsingMem(i, j - 1, dp);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(
            m+1,
            vector<int>(n+1, -1)
        );

        return solveUsingMem(m - 1, n - 1, dp);
    }
};