class Solution {
public:
    int countKDifference(vector<int>& s, int k) {
        int c=0,n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
                if(abs(s[j]-s[i])==k)c++;
        }
        return c;
    }
};