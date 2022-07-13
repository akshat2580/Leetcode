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
    int s=0;
    int longestUnivaluePath(TreeNode* root) {
        sol(root);
        return s;
    }
    int sol(TreeNode* root){
        if(root==nullptr)return 0;
        int left=sol(root->left);
        int right=sol(root->right);
        int l=0,r=0;
        if(root->left!=nullptr && root->left->val==root->val)l+=left+1;
        if(root->right!=nullptr && root->right->val==root->val)r+=right+1;
        s=max(s,l+r);
        return max(l,r);
    }
};