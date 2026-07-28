class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1) return s;
        int m=n/2;
        sort(begin(s),begin(s)+m);
        for(int i=0;i<m;i++){
            s[n-1-i]=s[i];
        }
        return s;
    }
};