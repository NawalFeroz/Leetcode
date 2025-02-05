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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL){
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool isleftoright=true;
        while(!q.empty()){
            int s=q.size();
            vector<int> row(s);
            for(int i=0;i<s;i++){
                TreeNode* n=q.front();
                q.pop();
                int x=isleftoright==true ? i:(s-i-1);
                row[x]=(n->val);
                if(n->left){
                    q.push(n->left);
                }
                if(n->right){
                    q.push(n->right);
                }
            }
            isleftoright=!isleftoright;
            res.push_back(row);
        }
        return res;
    }
};