class Solution {
public:
int product(int x){
    int t=1;
    while(x){
        int digit=x%10;
         x=x/10;
        t=t*digit;
    }
    return t;
}
    int smallestNumber(int n, int t) {
        while(true){
            if(product(n)%t==0) return n;
            n++;
        }

        
        
    }
};