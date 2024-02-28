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
private:
    void dfs(TreeNode* p, TreeNode* q, bool& res) {
        if ((p != NULL && q != NULL) && (p->val != q->val)) {
            res = false;
            return;
        }
        else if ((p == NULL && q != NULL) || (p != NULL && q == NULL) ) {
            res = false;
            return;
        }
        if (p != NULL && q != NULL) {
            dfs(p->right, q->right, res);
            dfs(p->left, q->left, res);
        }
    }

public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool res = true;
        dfs(p, q, res);
        return res;
    }
};
