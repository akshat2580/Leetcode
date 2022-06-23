class Solution {
public:
    int trap(vector<int>&a) {
        int n=a.size(),c=0;
      vector<int>l(n),r(n);
        l[0]=a[0];
        for(int i=1;i<n;i++){
            l[i]=max(a[i],l[i-1]);
        }
        r[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            r[i]=max(r[i+1],a[i]);
        }
        for(int i=1;i<n-1;i++){
         c+=min(l[i],r[i])-a[i];   
        }
        return c;
    }
};