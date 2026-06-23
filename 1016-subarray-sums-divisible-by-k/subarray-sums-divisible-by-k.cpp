class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        if( nums.size()==0) return 0;
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]++;
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            int rem=sum%k;
            if(rem<0)rem+=k;
            if(mp.find(rem)!=mp.end()){
                count+=mp[rem];
            }
            mp[rem]++;
            
        }
           
           

        return count;
        
    }
};