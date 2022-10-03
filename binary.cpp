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
        vector<vector<int>>v;
        if(root==nullptr)return v;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()){
            int n=q.size();
            vector<int>k;
            while(n--){
                TreeNode* p=q.front();
                q.pop();
                k.push_back(p->val);
                if(p->left)q.push(p->left);
                 if(p->right)q.push(p->right);
            }
            v.push_back(k);
        }
        return v;
    }
};
