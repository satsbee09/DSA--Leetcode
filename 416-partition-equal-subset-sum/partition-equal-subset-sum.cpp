class Solution {
public:
    bool solve(vector<int>& nums,int target,int n, vector<vector<int>>&dp){
        if(target==0){
            return true;
         
        }
        if(n<0|| target<0){
            return false;
        }
        
        if(dp[n][target]!=-1) return dp[n][target];
        bool take=false;
         if(nums[n]<=target)  
         take=solve(nums,target-nums[n],n-1,dp);
             
         bool nottake=solve(nums,target,n-1,dp);
         return dp[n][target]=nottake||take;
            
        
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
         if (sum % 2 != 0) {
            return false;
        }
        vector<vector<int>>dp(n,vector<int>(sum/2+1,-1));
       return  solve(nums,sum/2,n-1,dp);

    }
};