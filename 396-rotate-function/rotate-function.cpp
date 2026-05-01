class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        
        int total_sum=0;
        int f0=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
         total_sum+=nums[i];
         f0+=i*nums[i];    
        }
        int prev=f0;
        int ans=f0;
        for(int i=1;i<n;i++){
            int curr=prev+total_sum-n*nums[n-i];
            ans=max(ans,curr);
            prev=curr;
        }
        return ans;
        
    }
};