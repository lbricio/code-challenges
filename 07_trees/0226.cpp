class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return NULL;
        
        TreeNode* backup = root->right;
        root->right = root->left;
        root->left = backup;

        if (root->left != NULL)
            invertTree(root->left);
        if (root->right != NULL)
            invertTree(root->right);

        return root;
    }
};
