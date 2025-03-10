class Solution {
public:
    void helper(int index, vector<vector<int>>&ans, vector<int>v,vector<int>& nums ){
            ans.push_back(v);
           
        for(int i=index; i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1]){
                continue;
            }
            v.push_back(nums[i]);
            helper(i+1,ans,v,nums);
            v.pop_back();
        }
        return;

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        vector<int>v;
        helper(0,ans,v,nums);
        return ans;
        }
};