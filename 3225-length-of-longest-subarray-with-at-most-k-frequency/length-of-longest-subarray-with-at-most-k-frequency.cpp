class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        if(nums.size()==0) return 0;
        int count=0;
        int j=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                mp[nums[j]]--;
                j++;
            }
            count=max(count,i-j+1);
            

            
        }
        return count;
        
    }
};