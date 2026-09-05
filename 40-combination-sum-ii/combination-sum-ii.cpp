class Solution {
public:

    void solve(int start,
               vector<vector<int>>& ans,
               vector<int>& temp,
               vector<int>& candidates,
               int target) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // Skip duplicate at the same recursion level
            if (i > start &&
                candidates[i] == candidates[i - 1])
                continue;

            // Since sorted
            if (candidates[i] > target)
                break;

            // PICK
            temp.push_back(candidates[i]);

            // i + 1 because every element can be used once
            solve(i + 1,
                  ans,
                  temp,
                  candidates,
                  target - candidates[i]);

            // UNDO
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(
        vector<int>& candidates,
        int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, ans, temp, candidates, target);

        return ans;
    }
};