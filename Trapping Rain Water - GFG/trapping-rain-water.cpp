// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
         int s=0;
        int e=n-1;
        long long res=0;
        long long ls=0;
        long long le=0;
        while(s<e)
        {
            if(arr[s]<arr[e]){
                if(arr[s]>ls)
                ls=arr[s];
                else
                res+=ls-arr[s];
                
                s++;
            }
            else{
                if(arr[e]>le)
                le=arr[e];
                else
                res+=le-arr[e];
                
                e--;
            }
        }
        
        return res;// code here
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