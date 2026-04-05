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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both are null: identical
        if (!p && !q) return true;
        
        // One is null or values differ: not identical
        if (!p || !q || p->val != q->val) return false;
        
        // Recursively check left and right structures
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
public:
   bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // If subRoot is null, it's always a subtree
        if (!subRoot) return true;
        // If root is null but subRoot isn't, no match possible
        if (!root) return false;
        
        // 1. Check if they are identical starting at the current node
        if (isSameTree(root, subRoot)) return true;
        
        // 2. If not, recursively check the left and right children of the root
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
