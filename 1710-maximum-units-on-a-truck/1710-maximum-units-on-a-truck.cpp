class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int t) {
        int c=0,n=b.size();
        sort(b.begin(),b.end(),[](auto& a,auto& b){
            return a[1]>b[1];
        });
             int ans=0;
        for(int i=0;i<n;i++)
        {
            int x=min(b[i][0],t);
            ans+=x*b[i][1];
            t-=x;
            if(!t)break;
        }
        return ans;
    }
};

       