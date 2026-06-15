class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
      long long firstm=LONG_MIN;
      long long secondm=LONG_MIN;
      long long thirdm=LONG_MIN;
      for(int i=0;i<nums.size();i++){
        if(firstm==nums[i]||secondm==nums[i]||thirdm==nums[i]) continue;
        if(firstm<=nums[i]){
            thirdm=secondm;
            secondm=firstm;
            firstm=nums[i];
        }
        else if(nums[i]>=secondm){
            thirdm=secondm;
            secondm=nums[i];
        }
        else if(thirdm<=nums[i]){
            thirdm=nums[i];
        }
      }
      return thirdm==LONG_MIN?firstm:thirdm;
    }
};
