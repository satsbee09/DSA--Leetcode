class Solution {
public:
 void revesehelper(vector<char>&s,int i,int j){
    if(i>j)return ;
    char ch=s[i];
    s[i]=s[j];
    s[j]=ch;
     revesehelper(s,i+1,j-1);
 }
     
    void reverseString(vector<char>& s) {
       int n=s.size();
       int i=0;
       int j=n-1;
       
        revesehelper(s,i,j); 
        return;
    }
};