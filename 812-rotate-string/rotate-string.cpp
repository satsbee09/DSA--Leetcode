class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;
        string str=s;
        if(s.size()!=goal.size()){
            return false;
        }
    
        for(int j=0;j<s.size();j++){
                 char d=str[i];
                 string c=  str.substr(1)+d;
                 str=c;
                 if(c==goal){
                    return true;
                 }

        }
        return false;
       
        
    }
};