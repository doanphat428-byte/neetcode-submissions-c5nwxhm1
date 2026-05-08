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
    bool checkbst(TreeNode*a,long long minval,long long maxval){
        if(a==nullptr){
            return true;
        }
        if(a->val<=minval||a->val>=maxval){
            return false;
        }
        return checkbst(a->left,minval,a->val)&&checkbst(a->right,a->val,maxval);
    }
    bool isValidBST(TreeNode* root) {
       return  checkbst(root,LLONG_MIN,LLONG_MAX);
    }
};