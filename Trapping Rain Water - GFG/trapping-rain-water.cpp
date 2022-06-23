// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        int l=0,r=0,i=0,j=n-1;long long c=0;
        for(;i<j;){
            if(a[i]<a[j]){
                if(a[i]>=l)l=a[i];
                else
                c+=l-a[i];
                i++;
            }
            else
            {if(a[j]>=r)r=a[j];
            else c+=r-a[j];
                j--;
            }
        }
        return c;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends