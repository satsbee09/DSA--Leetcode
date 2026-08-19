class Solution {
public:
  int solve(int i,int j,vector<int>& nums, int target){
    int mid=(i+j)/2;
    if(i>j) return -1;
    if(nums[mid]==target) return mid;
    else if(nums[mid]>target){
      return  solve(i,mid-1,nums,target);
    }
    else{
       return  solve(mid+1,j,nums,target);
    }
   

  };
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
       return solve(i,j,nums,target);
    }
};