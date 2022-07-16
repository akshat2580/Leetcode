class Solution {
public:
    int search(vector<int>& s, int t) {
        int l=0,r=s.size()-1;
        while(l<=r){
           int m=l+(r-l)/2;
            if(s[m]==t)return m;
            else if(s[m]<t)l=m+1;
            else r=m-1;
        }
        return -1;
    }
};