class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n= arr.size();
       
        int j=n-1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[j]){
                arr[i]=arr[j];
                j--;
            }
            j=i;
        }
        arr.push_back(-1);
        arr.erase(arr.begin());
        return arr;
        
    }
};