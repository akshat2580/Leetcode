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
        vector<vector<int>>v;
        if(root==nullptr)return v;
        queue<TreeNode*>q;
        q.push(root);bool c=0;
        while(q.size()){
            int n=q.size();
            vector<int>k(n);
                for(int i=0;i<n;i++){
                TreeNode* p=q.front();
                q.pop();
                    if(c==0)
                k[i]=(p->val);
                    else
                        k[n-i-1]=p->val;
                    if(p->left)q.push(p->left);
                    if(p->right)q.push(p->right);
                }
            c=!c;
            v.push_back(k);
        }
        return v;
    }
};    
         