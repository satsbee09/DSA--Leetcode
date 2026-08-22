class Solution {
public:
int solvesum(int n){
    int sum=0;
    while(n){
     int digit=n%10;
     sum=sum+digit;
     n=n/10;

    }
    return sum;
};
int solvep(int n){
    int product=1;
    while(n){
     int digit=n%10;
     product*=digit;
     n=n/10;
    }
    return product;
};
    bool checkDivisibility(int n) {
        int sum=solvesum(n);
        int product=solvep(n);
        if(n%(sum+product)==0) return true;
        else
         return false;
    }
};