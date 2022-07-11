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
    void sol(vector<int>&v,TreeNode* root,int i){
        
    
        if(root==nullptr) return ;
        if(v.size()<i) v.push_back(root->val);
        sol(v,root->right,i+1 );
        sol(v,root->left,i+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        sol(v,root,1);
        return v;
    }
};