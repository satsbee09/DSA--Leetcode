class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area=0;

        while(i<=j){
             int w=j-i;
             int h=min(height[i],height[j]);
             area=max(area,(h*w));
            if(height[i]>height[j]){
                j--;
            }
            else
            i++;

                
        }
        return area;
        
    }
};