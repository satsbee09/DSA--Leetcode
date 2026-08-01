class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>ans;
        
       
        for(int i=0;i<nums1.size();i++){
            int curel=nums1[i];
            int j=0;
                while(nums2[j]!=curel){
                    j++;
                }
                while(j<nums2.size()){
                  if(nums2[j]>curel){
                    ans.push_back(nums2[j]);
                    break;
                  }
                  j++;
                }
                if(j>=nums2.size())  ans.push_back(-1);
            
            }
        
        return ans;
    }
};