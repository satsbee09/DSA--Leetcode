class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,INT_MAX);
        ans[0]=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=nums[i];j++){
                if(i+j<n)
              ans[i+j]=min(ans[i+j],1+ans[i]); 

            }
        }
        return ans[n-1];
    }
};