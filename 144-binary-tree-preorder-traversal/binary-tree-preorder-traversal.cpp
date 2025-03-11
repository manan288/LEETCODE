
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>v;
        if(root==NULL){
            return v;
        }
        s.push(root);
        while(!s.empty()){
                TreeNode*top=s.top();
                s.pop();
                v.push_back(top->val);
                if(top->right){
                    s.push(top->right);
                }
                 if(top->left){
                    s.push(top->left);
                }
                
        }
        return v;
    }
};