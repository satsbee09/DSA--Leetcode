class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
      int n=nums.size();
      if(n==2||n==1) return nums;
        vector<int>temp1;
        vector<int>temp2;
        temp1.push_back(nums[0]);
        temp2.push_back(nums[1]);
        
        int last1=nums[0];

        int last2=nums[1];
        
        for(int i=2;i<n;i++){
           if(last1>last2){
            temp1.push_back(nums[i]);
            last1=nums[i];
           }
           else{
            last2=nums[i];
            temp2.push_back(last2);
           }
        }
        for(auto it:temp2){
            temp1.push_back(it);
        }

        return temp1;
        
    }
};