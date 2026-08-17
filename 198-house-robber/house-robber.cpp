class Solution {
public:
     int solve(int i,vector<int>&nums,vector<int>&ans){
        if(i>nums.size()-1) return 0; 
        if(ans[i]!=-1) return ans[i];
       int pick=nums[i]+solve(i+2,nums,ans);
       int notpick=solve(i+1,nums,ans);
        return ans[i]=max(notpick,pick);
     }
    int rob(vector<int>& nums) {

        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>ans(n,-1);
    
        return solve(0,nums,ans);
        
    }
};