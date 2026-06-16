class Solution {
public:
    string processStr(string s) {
        string t="";
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                t=t+s[i];
            }
            else if(s[i]=='*'){
                if(t.size()>0){
                    int l=t.size();
                    t=t.substr(0,l-1);
                }
            }
            else if(s[i]=='#'){
                t=t+t;
            }
            else{
                reverse(t.begin(),t.end());
            }
        }
        return t;
    }
};