class Solution {
public:
    vector<int> productExceptSelf(vector<int>& s) {int n=s.size();long long c=1;
        vector<int>v(n);
               vector<int>p(n,1),q(n,1);
        for(int i=1;i<n;i++){
        
            p[i]=p[i-1]*s[i-1];
        }
         for(int i=1;i<n;i++){
           q[i]=q[i-1]*s[n-i];
         }  
           for(int i=0;i<n;i++){
               v[i]=q[n-1-i]*p[i];
           }                                        
        return v;                                           
    }
};