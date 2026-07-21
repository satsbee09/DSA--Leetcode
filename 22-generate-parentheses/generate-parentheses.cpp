class Solution {
public:
 bool isvalid(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            count++;
        }
        else if(s[i]==')'){
            count--;
            if(count<0){
                return false;
            }
        }
    }
    return count==0;
 }
     void genrate(string s,vector<string>&res,int n){
         if(s.length()==n ) {
            if(isvalid(s))
              res.push_back(s);
              return ;
        }
        genrate(s+"(",res,n);
           genrate(s+")",res,n);
       
     }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string s="";
        genrate(s,res,2*n);
        return res;
        
    }
};