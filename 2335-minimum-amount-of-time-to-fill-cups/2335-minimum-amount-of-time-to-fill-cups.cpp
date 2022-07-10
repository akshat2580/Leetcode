class Solution {
public:
    int fillCups(vector<int>& t) {
        int n=t.size(),c=0,sum=0;
        for(int i=0;i<n;i++){
            c+=t[i];
        }
        sort(t.begin(),t.end());
        sum+=t[n-1];
            return max(sum,(c+1)/2);
    }
};