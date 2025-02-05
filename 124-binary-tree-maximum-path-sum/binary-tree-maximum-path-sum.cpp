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
    int ans=INT_MIN;
    int helper(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lh=helper(root->left);
        int rh=helper(root->right);
        ans=max((lh+rh+root->val),ans);
        return max(max(lh,rh)+root->val,0);
    }
    int maxPathSum(TreeNode* root){
        if(root->left ==NULL && root->right==NULL){
            return root->val;
        }
        helper(root);
        return ans;
    }
};