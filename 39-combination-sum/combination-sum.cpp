class Solution {
   public:
    void solve(int i, vector<vector<int>>& ans, vector<int>& temp,
               vector<int>& candidates, int target) {
                if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (i >= candidates.size()) {
            return;
        }
        
        if (target >= candidates[i]) {
            temp.push_back(candidates[i]);
            solve(i, ans, temp, candidates, target - candidates[i]);
            temp.pop_back();
        }
        solve(i + 1, ans, temp, candidates, target);
    };
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0, ans, temp, candidates, target);
        return ans;
    }
};