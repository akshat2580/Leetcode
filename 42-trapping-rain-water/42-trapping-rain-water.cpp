class Solution {
public:
    int trap(vector<int>& h) {int n=h.size();int s=0;
        vector<int> l(n),r(n);l[0]=h[0];
                              r[n-1]=h[n-1];
        for(int i=1;i<n;i++){
           l[i]= max(l[i-1],h[i]);
        }
        
        for(int j=n-2;j>=0;j--){
            r[j]=max(r[j+1],h[j]);
        }
        for(int i=1;i<n-1;i++){
            s+=min(l[i],r[i])-h[i];
        }
        return s;
    }
};