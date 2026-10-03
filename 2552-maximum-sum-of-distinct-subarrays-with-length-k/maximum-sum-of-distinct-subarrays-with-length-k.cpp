class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0;
        
      unordered_map<int,int>mp;
      long long ans=0;
      int l=0;
      for(int r=0;r<nums.size();r++){
        sum+=nums[r];
        mp[nums[r]]++;
        if(r-l+1>k){
            sum-=nums[l];
            mp[nums[l]]--;
            if(mp[nums[l]]==0){
                mp.erase(nums[l]);
                 
            }
            l++;
        }

        if(r-l+1==k){
            if(mp.size()==k){
                ans=max(sum,ans);
            }
        }
      }
      return ans;
        
    }
};