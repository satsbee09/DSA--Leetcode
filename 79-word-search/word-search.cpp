class Solution {
public:

    bool solve(int k, int i, int j,
               int n, int m,
               vector<vector<char>>& board,
               string& word,
               vector<vector<int>>& visit) {

        // All characters matched
        if(k == word.size())
            return true;

        // Out of bounds
        if(i < 0 || i >= n || j < 0 || j >= m)
            return false;

        // Already used OR character doesn't match
        if(visit[i][j] == 1 || board[i][j] != word[k])
            return false;

        // Choose
        visit[i][j] = 1;

        // Down
        if(solve(k+1, i+1, j, n, m, board, word, visit))
            return true;

        // Up
        if(solve(k+1, i-1, j, n, m, board, word, visit))
            return true;

        // Right
        if(solve(k+1, i, j+1, n, m, board, word, visit))
            return true;

        // Left
        if(solve(k+1, i, j-1, n, m, board, word, visit))
            return true;

        // Backtrack
        visit[i][j] = 0;

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> visit(n, vector<int>(m, 0));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(solve(0, i, j, n, m, board, word, visit))
                    return true;
            }
        }

        return false;
    }
};