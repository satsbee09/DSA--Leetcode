class Solution {
public:
  bool solve(int i,int tr,vector<vector<int>>& matrix, int target){
    if(i>=matrix.size()||tr<0) return false;
    if(target==matrix[i][tr])return true;
     if(target<matrix[i][tr]){
         return solve( i,tr-1,matrix,target);
    }
  
       return  solve( i+1,tr,matrix,target);
    

  };
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        return solve(0,m-1,matrix,target);
    }
};