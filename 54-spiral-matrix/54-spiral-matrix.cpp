class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        int r=n-1,l=0,t=0,b=m-1;
        int d=1,c=-1;
        vector<int>v(n*m);
        while(t<=b && l<=r){
            if(d==1){
                for(int i=l;i<=r;i++)
                    v[++c]=a[t][i];
                    d++;t++;
               
            }
            else if(d==2){
                for(int i=t;i<=b;i++)
                    v[++c]=a[i][r];
                d++;r--;
            }
            else if(d==3){
                for(int i=r;i>=l;i--)
                    v[++c]=a[b][i];
                d++;b--;
            }
            else if(d==4){
                for(int i=b;i>=t;i--)
                    v[++c]=a[i][l];
                    l++;d=1;
            }
        }
        return v;
    }
};