class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int i=0;
         unordered_map<int,int>mp;
        while(i<nums.size()){
            int diff=target-nums[i];
            if(mp.find(diff)!=mp.end()){
                ans.push_back(mp[diff]);
                ans.push_back(i);
                return ans;
            }
            else{
                mp[nums[i]]=i;
            }
            i++;
        }
        return ans ;

        
    }
};