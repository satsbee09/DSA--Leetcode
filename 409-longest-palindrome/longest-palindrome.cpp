class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int count=0;
        bool t=true;
        for(auto it:mp){
            if(it.second%2==0){
                count+=it.second;
            }
            else{
               if(it.second>1) count+=it.second-1;
               if(t){
                count++;
                t=false;
               }
            }
        }
        return count;
    }
};