class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n=nums.size();
       int tsum=0;
       int lsum=0;
       
       for(int i=0;i<n;i++) tsum+=nums[i];
       for(int i=0;i<n;i++){
        int rsum=tsum-lsum-nums[i];
        if(rsum==lsum){
            return i;
        }
        lsum=lsum+nums[i];
       }
       return -1;
       
       }
};