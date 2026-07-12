class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        if(n==0)return {};
        vector<int>temp;
        for(auto it:arr){
            temp.push_back(it);
        }
        sort(temp.begin(),temp.end());
      unordered_map<int,int>mp;
      int rank=1;
      mp[temp[0]]=rank;
      for(int i=1;i<n;i++){
        if(temp[i]!=temp[i-1])rank++;
         mp[temp[i]]=rank;
    
      }
      vector<int>ans;
      for(int i=0;i<n;i++)  {
          ans.push_back(mp[arr[i]]);
      }
      return ans;


        return arr;
        
    }
};