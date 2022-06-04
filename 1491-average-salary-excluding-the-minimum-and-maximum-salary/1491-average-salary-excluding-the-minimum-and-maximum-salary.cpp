class Solution {
public:
    double average(vector<int>& s) {double c=0;int j=INT_MAX,k=INT_MIN;
        for(auto i:s){c+=i;
           j=min(j,i);k=max(k,i);          }   
                                    c=(c-j-k)/(s.size()-2);
                                    return c;
    }
};