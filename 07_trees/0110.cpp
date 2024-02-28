class Solution {
public:
    int checkHeight(TreeNode* root) {
        if (!root) return 0;
        
        int left_height = checkHeight(root->left);
        if (left_height == -1) return -1; // Subárvore esquerda não balanceada
        
        int right_height = checkHeight(root->right);
        if (right_height == -1) return -1; // Subárvore direita não balanceada
        
        int height_diff = abs(left_height - right_height);
        if (height_diff > 1) return -1; // Alturas desbalanceadas
        
        return 1 + max(left_height, right_height);
    }
    
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};
