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
    vector<vector<int>> levelOrder(TreeNode* root) {
          vector<vector<int>>ans;
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*>cur;
        cur.push(root);
        while(!cur.empty()){
            int n=cur.size();
            vector<int>tem;
            for(int i=0;i<n;i++){
                TreeNode*a=cur.front();
                cur.pop();
                tem.push_back(a->val);
                if(a->left!=nullptr){
                    cur.push(a->left);
                }
                 if(a->right!=nullptr){
                    cur.push(a->right);
                }
            }
            ans.push_back(tem);
        }
        return ans;
    }
};