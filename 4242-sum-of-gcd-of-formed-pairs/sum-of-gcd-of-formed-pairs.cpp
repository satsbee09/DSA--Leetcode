class Solution {
public:
long long gcd(long long a, long long b) {
    while(b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    long long gcdSum(vector<int>& nums) {
       vector<long long>ans;
       long long maxi=nums[0];
       for(int i=0;i<nums.size();i++){
          maxi=max((long long)nums[i],maxi);
          ans.push_back(gcd(nums[i],maxi));;
       }
      

       sort(ans.begin(),ans.end());
       
       int n=ans.size();
       long long res=0;
       int i=0;
       int j=n-1;
       while(i<j){
        res+=gcd(ans[i],ans[j]);
        j--;
        i++;}
       
       return res;

       



     
        
    }
};