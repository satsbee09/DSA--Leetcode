class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ans++;
                count=max(ans,count);   
            }
            else{
                ans=0;
            }
        }
        return count;
        
    }
};