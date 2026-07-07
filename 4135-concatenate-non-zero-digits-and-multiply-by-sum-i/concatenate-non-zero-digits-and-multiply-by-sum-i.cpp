class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long k=0;
        while(n){
            long long digit=n%10;
            if(digit){
                sum+=digit;
                k=k*10+digit;
            }
            n=n/10;
        }
        n=0;
        while(k){
            long long digit=k%10;
            n=n*10+digit;
            k=k/10;
        }
        return n*sum;

        
    }
};