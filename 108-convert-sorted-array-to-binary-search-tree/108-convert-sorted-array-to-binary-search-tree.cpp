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
// class Solution {
// public:

        
//     TreeNode* sol(vector<int>& v,TreeNode* node,int i,int j){
//         if(i==0&&j==v.size())
//             return node;
// vector<int>l(v.begin(),v.begin()+i);
//         vector<int>r(v.begin()+j,v.end());
//             node->left=sol(l,node,i--,j);
//       node->right=sol(r,node,i,j++);
//            return node;
//        }
    
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
        
//         int n=nums.size()-1;
//         if(n==-1)return nullptr;
//         if(n==0)return new TreeNode(nums[0]);
//             TreeNode* node=new TreeNode(nums[n/2]);
//         return sol(nums,node,n/2-1,n/2+1);
        
//     }};
class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
        if(num.size() == 0) return NULL;
        if(num.size() == 1)
        {
            return new TreeNode(num[0]);
        }
        
        int middle = num.size()/2;
        TreeNode* root = new TreeNode(num[middle]);
        
        vector<int> leftInts(num.begin(), num.begin()+middle);
        vector<int> rightInts(num.begin()+middle+1, num.end());
        
        root->left = sortedArrayToBST(leftInts);
        root->right = sortedArrayToBST(rightInts);
        
        return root;
    }
};