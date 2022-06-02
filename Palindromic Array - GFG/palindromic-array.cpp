// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
bool pal(int a){
    int n=a,s=0;
    while(a>0){
        s=s*10+a%10;
        a/=10;
        
    }
    if(s==n)return true;
    else return false;
}
    int PalinArray(int a[], int n)
    {int k=0;
    	for(int i=0;i<n;i++)
    	if(pal(a[i]))k++;
    	if(k==n)
    	return 1;
    	else return 0;// code here
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends