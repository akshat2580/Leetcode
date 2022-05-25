class Solution {
public:
    int heightChecker(vector<int>& v) {int c=0,j=0;
        multiset<int>s;
        s={v.begin(),v.end()};
        for(auto i:s)
            if(i!=v[j++])c++;
        return c;
    }
};