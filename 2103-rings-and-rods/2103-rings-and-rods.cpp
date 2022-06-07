class Solution {
public:
    int countPoints(string s) {int c=0;
        map<char,set<char>>m;
         for(int i=0;i<s.size();i++){
             if(i%2)m[s[i]].insert(s[i-1]);
         }
        for(auto i:m){
            if(i.second.size()==3)c++;
        }
                               return c;
    }
};