/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(int &maxsum,TreeNode*root){
        if(!root){
            return 0;
        }
        int leftsum=max(0, dfs(maxsum,root->left));
        int rightsum=max(0, dfs(maxsum,root->right));
        maxsum=max(maxsum,root->val+leftsum+rightsum);
        return max(leftsum,rightsum) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        if(!root){
            return 0;
        }
        int maxsum=INT_MIN;
         dfs(maxsum,root);
         return maxsum;
    }
};