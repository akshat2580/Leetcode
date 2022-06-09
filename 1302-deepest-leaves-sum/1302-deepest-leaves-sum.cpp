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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int s=0;
        while(q.size()){
           s=0;int n=q.size();
            for(int i=0;i<n;i++)
            {auto j=q.front();  q.pop();
                s+=j->val;
             if(j->left)q.push(j->left);
             if(j->right)q.push(j->right);
                
            }
        }
        return s;
    }
};