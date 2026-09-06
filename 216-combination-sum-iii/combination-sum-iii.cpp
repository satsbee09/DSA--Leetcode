class Solution {
public:
 void solve(int i,int k,int n,vector<vector<int>>&ans,vector<int>&temp){
    if(n==0&&temp.size()==k){
        ans.push_back(temp);
    }
    if(i>n||i==10){
        return ;
    }
    temp.push_back(i);
    solve(i+1,k,n-i,ans,temp);
    temp.pop_back();
    solve(i+1,k,n,ans,temp);


 }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(1,k,n,ans,temp);
        return ans;
        
    }
};