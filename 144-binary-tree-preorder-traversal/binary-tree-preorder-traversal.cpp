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
/*class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL){
            return ans;
        }
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return ans;
    }
};*/
class Solution{
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root){
        if(root==NULL){
            return ans;
        }
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* n=st.top();
            st.pop();
            ans.push_back(n->val);
            if(n->right!=NULL){
                st.push(n->right);
            }
            if(n->left!=NULL){
                st.push(n->left);
            }
        }
        return ans;
    }
};