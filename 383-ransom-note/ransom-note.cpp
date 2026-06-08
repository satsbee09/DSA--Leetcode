class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        int n=magazine.size();
        for(int i=0;i<n;i++){
            mp[magazine[i]]++;
        }
        n=ransomNote.size();

        for(int i=0;i<n;i++){
            if(mp.find(ransomNote[i])==mp.end()){
                return false;

            }
            mp[ransomNote[i]]--;
        if(mp[ransomNote[i]]==0){
            mp.erase(ransomNote[i]);
        }
        
        }
        return true;
        
    }
};