class Solution {
public:
    int titleToNumber(string columnTitle) {
        int val=0;
        for( auto ch:columnTitle){
            val= val*26+(ch-'A'+1);
        }
        return val;
    }
};