class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int i=0;
        int j=0;
        while(i<nums.size()){
            if(nums[i]!=val){
                nums[j]=nums[i];
                k++;
                j++;
        
            }
            i++;
            }
        return k++;
    }
};