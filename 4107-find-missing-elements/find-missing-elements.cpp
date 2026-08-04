class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>resu;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            int pre=nums[i-1];
            int cur=nums[i];
            for(int j=pre+1;j<cur;j++){
                resu.push_back(j);
            }
        }
        return resu;
    }
};