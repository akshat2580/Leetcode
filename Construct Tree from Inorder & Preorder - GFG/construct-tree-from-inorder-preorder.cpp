// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int pre_id=0;
    
    Node* buildTree(int in[],int pre[],int n,int low,int high,unordered_map<int,int>& pos){
        if(pre_id==n || high<low)return NULL;
        // cout<<pre_id<<"   ";
        Node* current=new Node(pre[pre_id++]);
        int id=pre_id-1;
        current->right=NULL;
        current->left=NULL;
        if(high==low)return current;
        current->left=buildTree(in,pre,n,low,pos[pre[id]]-1,pos);
        current->right=buildTree(in,pre,n,pos[pre[id]]+1,high,pos);
        return current;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        unordered_map<int,int> pos;
        for(int i=0 ; i<n ; i++){
            pos[in[i]]=i;
        }
        return buildTree(in,pre,n,0,n-1,pos);
        // Code here
    }
};
// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends