class Solution {
public:
    int search(vector<int>& a, int t) {
      
        int s=a.size(),l=0,r=s-1;
        int mid;
        while(l<=r){
            mid=(l+r)/2;
            int n=a[mid];
                   
                   if(n==t)
                       return mid;
            
           else if(n>t){
                r=mid-1;
                
            }
            
                   else
                       l=mid+1;
            
            
        }
    
        return -1;
    }
};