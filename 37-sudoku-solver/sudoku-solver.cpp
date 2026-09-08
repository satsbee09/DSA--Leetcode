class Solution {
  public:  bool issafe(int row,int col,int dig,vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            if(board[i][col]==dig + '0'){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[row][i]==dig + '0'){
                return false;
            }
        }
        int SR=(row/3)*3;
         int CR=(col/3)*3;
         for(int i=SR;i<=SR+2;i++){
            for(int j=CR;j<=CR+2;j++){
                if(board[i][j]==dig + '0'){
                    return false;
                }
            }
         }
         return true;
    };
 bool solve(vector<vector<char>>& board,int n,int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]!='.'){
                continue;
            }
            else{
                for(int d=1;d<=9;d++){
                    if(issafe(i,j,d,board)){
                        board[i][j]=d+'0';
                       
                        if(solve(board,n,m)){
                            return true;
                        }

                        board[i][j]='.';
                    }
                }
                return false;
            }
        }
        
    }
    return true ;
};
    void solveSudoku(vector<vector<char>>& board) {
       int n=board.size();
       int m=board[0].size(); 

        solve(board,n,m);
         return;
        
    }
};