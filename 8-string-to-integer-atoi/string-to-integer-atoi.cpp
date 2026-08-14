class Solution {
public:

    int myAtoi(string s) {

        int n=s.size();
        int i=0;
        while(s[i]==' '&& i<n){
            i++;
        }
        int sign=1;
        if(i<n&&s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(i<n&& s[i]=='+'){
            i++;
        }
        long long res=0;
        while(i<n && isdigit(s[i])){
            res=res*10+(s[i]-'0');
            i++;

            if(res*sign<=INT_MIN){
                return INT_MIN;
            }
            if(res*sign>=INT_MAX){
                return INT_MAX;
            }
        }
        return res*sign;
        
    }
};