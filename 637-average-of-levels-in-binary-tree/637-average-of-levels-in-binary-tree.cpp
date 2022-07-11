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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        vector<double>v;
        if(root==nullptr)return v;
        q.push(root);
        while(q.size()){
            int n=q.size();double s=0;int c=0;
            while(n--){TreeNode* k=q.front();
                 q.pop();
                s+=k->val;
            if(k->right)q.push(k->right);
                       if(k->left)q.push(k->left);
                c++;
            }
            v.push_back(s/c);
        }
        return v;
    }
};