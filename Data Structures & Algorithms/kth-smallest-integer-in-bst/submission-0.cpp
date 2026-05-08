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
public: int h=0;
void lnr(TreeNode*root,int &k){
    if(root==nullptr){
        return ;
    }
    lnr(root->left,k);
    k--;
    if(k==0){
        h=root->val;

        return;
    }
    lnr(root->right,k);
}
    int kthSmallest(TreeNode* root, int k) {
        lnr(root,k);
        return h;
    }
};