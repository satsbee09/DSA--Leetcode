class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
    sort(costs.begin(),costs.end());
    int count=0;
    int n=costs.size();
    for(int i=0;i<n;i++) {
         if(coins>0&&coins>=costs[i]){
            coins=coins-costs[i];
            count++;

         }
    }
    return count;
    }
};