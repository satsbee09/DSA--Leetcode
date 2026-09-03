class Solution {
public:
      #define MOD 1000000007;
      long long solve(long long b,long long p){
        if(p==0) return 1;
        long long half=solve(b,p/2);
        if(p%2==0){
            return ( half*half)%MOD;
        }
        else{
           return  (half*half*b)%MOD;
        }
      }
    int countGoodNumbers(long long n) {
        long long oddp=n/2;
        long long evenp=(n+1)/2;

       return (solve(5.0,evenp)*solve(4.0,oddp))%MOD;
        
        
    }
};