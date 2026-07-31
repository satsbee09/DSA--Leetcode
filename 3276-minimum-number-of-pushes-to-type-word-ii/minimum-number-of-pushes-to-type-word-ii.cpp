class Solution {
public:
    int minimumPushes(string word) {
        
        int n=word.size();
        int ans=0;
        vector<int>temp(26,0);
        for(int i=0;i<n;i++){
            temp[word[i]-'a']++;
        }
        sort(temp.begin(),temp.end(),greater<int>());
        
        for(int i=0;i<26;i++){
            if(temp[i]==0) break;
            ans+=temp[i]*((i/8)+1);
        }
        
        return ans;

        
    }
};