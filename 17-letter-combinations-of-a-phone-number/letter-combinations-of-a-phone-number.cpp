class Solution {
public:
   void solve(string digits,int i,vector<string>&ans,string output, string arr[]){
    if(i>=digits.size()){
        ans.push_back(output);
        return;
    }
    int n=digits[i]-'0';
    string a=arr[n];
    for(int k=0;k<a.size();k++){
              output+=a[k];
           solve(digits,i+1,ans,output,arr);
           output.pop_back();
    }
   
   };
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output="";
        string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
            solve(digits,0,ans,output,arr);
            return ans;
        
    }
};