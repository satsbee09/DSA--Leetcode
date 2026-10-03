class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        if(k<=1)return 0;
        long long mul=1;
        int n=nums.size();
        int count=0;
        while(j<n){
            mul=mul*nums[j];
            while((mul>=k)){
                mul/= nums[i];
                i++;
            }
            count=count+(j-i+1);
            j++;

        }
        return count;
        
    }
};