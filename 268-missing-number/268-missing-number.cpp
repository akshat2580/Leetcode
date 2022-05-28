class Solution {
public:
    int missingNumber(vector<int>& v) {int c=0,r=0;
        int n=v.size();
        for(int i=0;i<n;i++){
           r^=i;
            r^=v[i];
        }
       
        return r^n;
    }
};