class Solution {
public:
    int maxConsecutive(int b, int t, vector<int>& s) {
        sort(s.begin(),s.end());
        int c=1,n=s.size(),res=max(s[0]-b,t-s[n-1]);
        
        for(int i=1;i<n;i++){
            res=max(res,s[i]-s[i-1]-1);
        }
        return res;
    }
};