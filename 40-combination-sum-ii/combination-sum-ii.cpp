class Solution {
public:
    void backtrack(vector<int>& candidates, int target, set<vector<int>>& result, vector<int>& current, int index){
         if (target == 0) { 
            result.insert(current); // Found a valid combination
            return;
        }
        if (index>candidates.size()-1||target < 0) return;

        for (int i = index; i < candidates.size(); i++) {
            // Skip duplicate elements
            if (i > index && candidates[i] == candidates[i - 1]) continue; 

            current.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], result, current, i + 1); // Move to the next index
            current.pop_back();
        }


    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
           set<vector<int>> result;
           sort(candidates.begin(),candidates.end());
        vector<int> current;
        backtrack(candidates, target, result, current, 0);
        return vector<vector<int>>(result.begin(), result.end());

    }
};