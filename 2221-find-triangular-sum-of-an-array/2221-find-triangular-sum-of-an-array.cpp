class Solution {
public:
    int triangularSum(vector<int>& s) {vector<int>v; int n=s.size();
       if(n==1)return s[0];
                                      
        for(int i=0;i<n-1;i++){
            v.push_back((s[i]+s[i+1])%10);
        }
        return triangularSum(v);
    }
};