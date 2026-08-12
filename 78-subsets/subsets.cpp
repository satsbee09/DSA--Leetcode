class Solution {
public:
    void subsetre(vector<int>& nums,vector<vector<int>>&ans,int i,int n,vector<int>output){
        if(i>=n) {
            ans.push_back(output);
            return ;
        }
        subsetre(nums,ans,i+1,n,output);
        int k=nums[i];
        output.push_back(k);
        subsetre(nums,ans,i+1,n,output);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return{};
        
        vector<vector<int>>ans;
        vector<int>output;
        subsetre(nums,ans,0,n,output);
        return ans;
        
    }
};