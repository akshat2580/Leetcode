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
    void dfs(TreeNode* root, int layer, vector<vector<int>> &tmp) {
        if (tmp.size() < layer + 1) tmp.push_back({});
        tmp[layer].push_back(root->val);
        if (root->left) dfs(root->left, layer + 1, tmp);
        if (root->right) dfs(root->right, layer + 1, tmp);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        if (!root) return {};
        vector<vector<int>> tmp(1);
        dfs(root, 0, tmp);
        vector<double> res(tmp.size());
        transform(begin(tmp), end(tmp), begin(res), [](auto v){return accumulate(begin(v), end(v), 0.0) / v.size();});
        return res;
    }
};