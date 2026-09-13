class Solution {
public:
    int solve(int i,vector<int>& nums,int currsum,int target, int sum ,vector<vector<int>>&dp){
        if(i>=nums.size()){
            return currsum == target ? 1 : 0;
        }
        
        int idx=currsum+sum;
        if(dp[i][idx]!=-1){
            return dp[i][idx];
        }

        int add=solve(i+1,nums,currsum+nums[i],target,sum,dp);
         int subtract=solve(i+1,nums,currsum-nums[i],target,sum,dp);
         return dp[i][idx]=add+subtract;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        vector<vector<int>>dp(n,vector<int>(2*sum+1,-1));
        if(abs(target)>sum){
            return 0;
        }
        return solve(0,nums,0,target,sum,dp);
        
    }
};