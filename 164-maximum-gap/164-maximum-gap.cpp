class Solution {
public:
    int maximumGap(vector<int>& n) {
        sort(n.begin(),n.end());
        int c=0;
        for(int i=0;i<n.size()-1;i++){
            c=max(c,n[i+1]-n[i]);
        }
        return c;
    }
};