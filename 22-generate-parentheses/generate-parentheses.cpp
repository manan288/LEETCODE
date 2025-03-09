class Solution {
public:
    void helper(vector<string>&v,string s, int n,int left,int right){
    
        if(right==n && left==n){
            v.push_back(s);
            return;
        }
        if(left<n){
        helper(v,s+'(',n,left+1,right);
        }
        if(right<left){
        helper(v,s+')',n,left,right+1);
        }
        return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string>v;
        helper(v,"",n,0,0);
        return v;
    }
};