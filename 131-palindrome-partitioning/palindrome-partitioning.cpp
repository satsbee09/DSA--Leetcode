class Solution {
public:
  bool ispalindrome(int i,int j,string s){
    while(j>i){
        if(s[i]!=s[j]){
            return false;
        }
        j--;
        i++;
    }
    return true;
  }
    void solve(int i,string s,vector<string>temp, vector<vector<string>>&ans){
       if(i==s.size()){
         ans.push_back(temp);
              return ;
       }

       for(int j=i;j<s.size();j++){
        if(ispalindrome(i,j,s)){
            temp.push_back(s.substr(i,j-i+1));
            solve(j+1,s,temp,ans);
            temp.pop_back();
        }
       }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        if(s.size()==0) return ans;
        solve(0,s,temp,ans);
        return ans;
    }
};