class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int msum=0;
        int sum=0;
        int totalsum=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            totalsum+=nums[i];
            //kadene max
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
            }
            //kadene min
            msum+=nums[i];
            mini=min(mini,msum);
            if(msum>0){
                msum=0;
            }

        }
        if(maxi<0)
        return maxi;
        return max(maxi,totalsum-mini);
    }
};