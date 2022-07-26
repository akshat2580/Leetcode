class Solution {
public:
    int minimumDifference(vector<int>& s, int j) {
        int k=INT_MAX,l=0,n=s.size();
        sort(s.begin(),s.end());
        for(int i=0 ; i+j<=n ; i++){
            k=min(k,s[i+j-1]-s[i]);
        }
        return k;
    }
};