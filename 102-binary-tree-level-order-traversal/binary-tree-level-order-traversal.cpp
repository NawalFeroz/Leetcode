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
        vector<vector<int>> wholeans;
        if(root==NULL){
            return wholeans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> lv;
            int lvs=q.size();
            for(int i=0;i<lvs;i++){
                TreeNode *n=q.front();
                q.pop();
                lv.push_back(n->val);
                if(n->left!=NULL){
                    q.push(n->left);
                }
                if(n->right!=NULL){
                    q.push(n->right);
                }
            }
            wholeans.push_back(lv);
        }
        return wholeans;
    }
};