class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            int maxi=INT_MIN;
            int val;
            for(auto it:mp){
            if(it.second>maxi){
                maxi=it.second;
                val=it.first;
            }
            }
            mp.erase(val);
            ans.push_back(val);
            
        }
        return ans;
        
    }
};