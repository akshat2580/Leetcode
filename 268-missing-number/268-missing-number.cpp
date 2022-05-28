class Solution {
public:
    int missingNumber(vector<int>& v) {long long c=0,r=0;
        int n=v.size();long long s=(n*(n+1))/2;
        for(int i=0;i<n;i++){
           c+=v[i]-i;
        }
       
        return n-c;
    }
};