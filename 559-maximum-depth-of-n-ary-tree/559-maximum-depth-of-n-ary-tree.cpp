/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
         if (root == NULL) return 0;
        vector<Node*>v=root->children;int r=0,l=0;
    for(int i=0;i<v.size();i++)
    {
        r=maxDepth(v[i]);
         l=max(l,r);
    }
      
       return 1+max(l,r); 
    }
};