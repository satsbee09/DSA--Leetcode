class Solution {
public:
int digit(int i,vector<int>& nums){
    int n=nums[i];
    int sum=0;
    while(n){
     int digit=n%10;
      n=n/10;
      sum=sum+digit;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        if(nums.size()==0) return -1;
        for(int i=0;i<nums.size();i++){
            if(i==digit(i,nums)){
                return i;
            }
        }
        return -1;
        
    }
};