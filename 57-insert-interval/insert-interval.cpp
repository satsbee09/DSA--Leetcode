class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int i=0;
        int start=newInterval[0];
        int end=newInterval[1];
        int n=intervals.size();
        // left interval;
        for(;i<n;i++){
            if(intervals[i][0]<start&&intervals[i][1]<start){
                ans.push_back(intervals[i]);
            }
            else{
                break;
            }
        }
        // merging in  intervals
        for(;i<n;i++){
             if(intervals[i][0]<=end){
                start=min(start,intervals[i][0]);
                end=max(end,intervals[i][1]);
             }
             else{
                break;
             }

        }
        ans.push_back({start,end});

        // Remaining Intervals
        for(;i<n;i++){
            ans.push_back(intervals[i]);
        }
        return ans;

    }
};