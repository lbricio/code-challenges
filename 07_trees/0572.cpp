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
bool checkCandidate(TreeNode* root, TreeNode* subRoot) {
    if (root == NULL && subRoot == NULL)
        return true;
    else if (root == NULL || subRoot == NULL)
        return false;
    else if (root->val != subRoot->val)
        return false;
    return (checkCandidate(root->left, subRoot->left) 
         && checkCandidate(root->right, subRoot->right));
}

void dfs(TreeNode* root, TreeNode* subRoot, bool& res) {
    if (root == NULL || subRoot == NULL)
        return;
    if (root->val == subRoot->val)
        res += (checkCandidate(root->left, subRoot->left) 
             && checkCandidate(root->right, subRoot->right));
    dfs(root->right, subRoot, res);
    dfs(root->left, subRoot, res);
}

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool res=false;
        dfs(root, subRoot, res);
        return res;
    }
};
