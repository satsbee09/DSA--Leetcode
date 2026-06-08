class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string st="balloon";
        unordered_map<char,int>mp;
        int n=text.size();
        for(int i=0;i<n;i++){
            mp[text[i]]++;
        }
        
        
        return min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
        
    }
};