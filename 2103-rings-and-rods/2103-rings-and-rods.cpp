class Solution {
public:
    int countPoints(string r) {
        unordered_map<char,set<char>>m;
        int c=0;
        for(auto i=0;i<r.size();i-=-1)
            if(r[i]!='B'&&r[i]!='G'&&r[i]!='R')
                m[r[i]].insert(r[i-1]);
                for(auto i:m)if(i.second.size()==3)c++;
        return c;
    }
};