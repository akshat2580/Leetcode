class Solution {
public:
    vector<int> successfulPairs(vector<int>& sp, vector<int>& po, long long k) {
        vector<int>v;int n=sp.size(),m=po.size();
        
        sort(po.begin(),po.end());
        vector<vector<long long>>d;
       for(int i=0;i<n;i++){
          
         int l=0,r=m-1;
       while(l<=r){
           int q=(l+r)/2;
               if((long long int)sp[i]*(long long int)po[q] >= k)r=q-1;
                  else l=q+1;
       }
                           v.push_back(m-r-1); 
       }                     
        return v;
    }
};