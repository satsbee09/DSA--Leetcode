class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        int mfreq=0;
        for(auto it:mp){
          if(it.second>mfreq){
            ans=it.first;
            mfreq=it.second;
              
         } 
         
        else if(it.second==mfreq){
            ans=min(it.first,ans);
        }  
         
            
        }
        return ans;
        
    }
};