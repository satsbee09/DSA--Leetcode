class Solution {
public:
    int maximumLengthSubstring(string s) {
       
        int n=s.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
             int arr[26]={0};
            for(int j=i;j<n;j++){
                arr[s[j]-'a']++;
                if(arr[s[j]-'a']>2){
                    break;
                }
                ans=max(ans,j-i+1);
            
        }
        }
        return ans;
        
        
    }
};