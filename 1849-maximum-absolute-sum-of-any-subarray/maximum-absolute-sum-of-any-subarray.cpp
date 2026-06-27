class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minsum=0;
        int maxsum=0;
        int maxsubsum=INT_MIN;
        int minsubsum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            maxsum+=nums[i];
            maxsubsum=max(maxsubsum,maxsum);
            if(maxsum<0)maxsum=0;

            minsum+=nums[i];
            minsubsum=min(minsubsum,minsum);
            if(minsum>0)minsum=0;
        }
        return max(abs(minsubsum),abs(maxsubsum));
        
    }
};