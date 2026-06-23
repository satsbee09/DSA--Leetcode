class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]++;
        int count=0;
    
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            int dif=sum-goal;
            if(mp.find(dif)!=mp.end()){
                count=count+mp[dif];
            }
            mp[sum]++;
        }
        return count;
    }
};