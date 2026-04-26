class Solution {
public:
    int addDigits(int num) {
        
        while(num>9){
            int n1=num;
           int digitsum=0;
            while(n1>0){
                int k=n1%10;
                digitsum+=k;
                n1=n1/10;

            }
            num=digitsum;
        }
        return num;
    }
};