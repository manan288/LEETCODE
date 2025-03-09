class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>& current, int index){
         if (target == 0) { 
            result.push_back(current); // Found a valid combination
            return;
        }
        if (index>candidates.size()-1||target < 0) return;

        current.push_back(candidates[index]);
        backtrack(candidates, target - candidates[index], result, current, index);
        current.pop_back(); 

        // Exclude the current number and move to the next index
        backtrack(candidates, target, result, current, index + 1);
        return;

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
           vector<vector<int>> result;
        vector<int> current;
        backtrack(candidates, target, result, current, 0);
        return result;
    }
};