class Solution {
public:
    int rotatedDigits(int n) {
        unordered_map<int,int>mp;
        mp[2]=5;
        mp[5]=2;
        mp[1]=1;
        mp[0]=0;
        mp[8]=8;
        mp[9]=6;
        mp[6]=9;
        int ans=0;
        for(int i=1;i<=n;i++){
            int num=i;
            bool count=true;
            int rev=0;
            bool changed=false;
            
            while(num>0){
                int digit=num%10;
                num=num/10;
                if(mp.find(digit)==mp.end()){
                    count=false;
                    break;
                }
                  if(digit == 2 || digit == 5 || digit == 6 || digit == 9){
                    changed = true;}
                 rev= 10*rev +mp[digit];
            }
            
            if(count&&changed){
              ans++;
            }

        }
        return ans;
        
    }
};