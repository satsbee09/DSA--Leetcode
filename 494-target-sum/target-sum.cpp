class Solution {
public:
    void solve(int i,vector<int>& nums,int target,int &count){
        if(i>=nums.size()){
            if(target==0){
                count++;
            }
            return ;
        }
        solve(i+1,nums,target+nums[i],count);
        solve(i+1,nums,target-nums[i],count);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        solve(0,nums,target,count);
        return count;
    }
};