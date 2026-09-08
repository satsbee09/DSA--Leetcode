class Solution {
public:
  bool issafe(int row,int col,vector<string>&board,int n){
    //horizontal
    for(int i=0;i<n;i++){
        if(board[row][i]=='Q') return false;

    }
    //vertical
for(int i=0;i<row;i++){
    if(board[i][col]=='Q') return false;

}
//left diagonal
for(int i=row-1, j=col-1;i>=0&&j>=0;i--,j--){
    if(board[i][j]=='Q') return false;
    
}
for(int i=row-1, j=col+1;i>=0&&j<n;j++,i--){
    if(board[i][j]=='Q') return false;
}
 return true;
  }
     void nqueen(vector<vector<string>>&ans,vector<string>&board,int n,int row){
         if(row==n){
            ans.push_back(board);
            return ;
         }
        for(int col=0;col<n;col++){
            if(issafe(row,col,board,n)){
                board[row][col]='Q';
                nqueen(ans,board,n,row+1);
                board[row][col]='.';
            }
        }
     }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string> board(n, string(n, '.'));
        nqueen(ans,board,n,0);
        return ans;
    }
};