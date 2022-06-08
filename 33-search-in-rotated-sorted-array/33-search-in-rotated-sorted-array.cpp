class Solution {
public:
    int search(vector<int>& s, int t) {
    
        int n=s.size();
        if(n==1&&s[0]==t)return 0;
        
       
             int r=n-1,l=0;
             while(l<=r){
                 int m=l+(r-l)/2;
                  if(s[m]==t)return m;
                 if(s[l]<=s[m]){
                     if(t<=s[m]&&t>=s[l])r=m-1;
                     else
                         l=m+1;
                 }
                 else{
                     if(s[m]<=t&&t<=s[r])l=m+1;
                     else r=m-1;
                 }
             }
             
                                     
        return -1;
    }
};
 