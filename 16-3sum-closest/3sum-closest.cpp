class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
         int closum=nums[0]+nums[1]+nums[2];
        int mindiff=abs(closum-target);
        for(int i=0;i<nums.size();i++){
           int j=i+1;
           int k=nums.size()-1;
           while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            int diff=abs(sum-target);
            if(diff<mindiff){
                closum=sum;
                mindiff=diff;
            }
            if(sum>target)k--;
            else if(sum<target)j++;
            else return sum;
           }


        }
        return closum;
    }
};