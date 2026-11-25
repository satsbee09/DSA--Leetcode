class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
    
        int lmax=nums[0];
        int rmin=nums[nums.size()-1];
        int left=-1;
        int right=-1;
        for( int i=1;i<nums.size();i++){
            if(lmax>nums[i]){
               left=i;
            }
            else lmax=nums[i];
        }
        if(left==-1)return 0;
        for(int i=nums.size()-2;i>=0;i--){
            if(rmin<nums[i]){
                right=i;
            }
            else{
                rmin=nums[i];
            }
        }
        return left-right+1;

        
    }
};