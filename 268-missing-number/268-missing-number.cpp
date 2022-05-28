class Solution {
public:
    int missingNumber(vector<int>& v) {int c=0;
        int n=v.size();map<int,int>m;
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        for(int i=0;i<=n;i++)if(m[i]==0)c=i;
        return c;
    }
};