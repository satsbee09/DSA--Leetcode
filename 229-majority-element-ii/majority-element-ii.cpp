class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
       if(nums.size()==1) return nums;
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
        mp[nums[i]]++;
       }
       vector<int>ans;
       int m=n/3;
       for(auto it:mp){
        if(it.second>m){
            ans.push_back(it.first);
        }
       }
       return ans;
    }
};