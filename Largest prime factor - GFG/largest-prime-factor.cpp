// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
bool prime(int n){
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)return 0;
    return 1;
}
    long long int largestPrimeFactor(int n){
        int c=0,p=n,s=sqrt(n);
        for(int i=2;i<=n;i++){
           
            if(n%i==0&&prime(i))c=i;
        }
     return c;   // code here
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends