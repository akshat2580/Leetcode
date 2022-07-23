class Solution {
public:
    long long zeroFilledSubarray(vector<int>& s) {
        long long c=0,n=s.size(); long long r=0;
        for(int i=0;i<n;i++){
            if(s[i]==0)r++;
            else {
                c+=(r*(r+1))/2;
                r=0;
            }
        } if(r) c+=(r*(r+1))/2;
        return c;
    }
};