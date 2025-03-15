class Solution {
public:
    int depth(TreeNode* root){
        if(!root){
            return 0;
        }

        if(!root->left &&!root->right){
            return 1;
        }
        return 1+ max(depth(root->right),depth(root->left));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        int l=depth(root->left);
        int r=depth(root->right);
        int curr=l+r;

        return max(curr,max(diameterOfBinaryTree(root->right),diameterOfBinaryTree(root->left)));

    }
};