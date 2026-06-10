class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int onescount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                   onescount++;
            }
        }
        if(onescount==0) return 0;
       int zerocount=0;
        for(int i=0;i<onescount;i++){
            nums.push_back(nums[i]);
            if(nums[i]==0){
                zerocount++;
            }
        }
        int ans=zerocount;
        for(int i=onescount;i<nums.size();i++){
            if(nums[i-onescount]==0){
               zerocount--;
            }
            if(nums[i]==0){
                zerocount++;
            }

            ans=min(zerocount,ans);
        }
        
         return ans;


        
    }
};