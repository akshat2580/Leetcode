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
    int kthSmallest(TreeNode* root, int k) {
        set<int>s;
                    if(root==NULL)return 0;                        
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()){
            
            for(int i=0;i<q.size();i++){
                auto n=q.front();
                q.pop();
                s.insert(n->val); 
                if(n->left)q.push(n->left);
                if(n->right)q.push(n->right);
            }
        }int c;
        for(auto i=s.begin();i!=s.end()&&k>0;i++,k--)
            c=*i;
         return c;                                   
    }
};