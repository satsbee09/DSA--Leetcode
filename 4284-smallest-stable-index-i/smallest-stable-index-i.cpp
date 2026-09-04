class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi =nums[0];
        int n=nums.size();
        int l=-1;
        for(int i=0;i<n;i++){
            int mini=nums[i];
            maxi=max(nums[i],maxi);
            for(int j=i+1;j<n;j++){
                mini=min(nums[j],mini);
            }
            if((maxi-mini)<=k){
                l=i;
                break;
            }
        }
        return l;


    }
};