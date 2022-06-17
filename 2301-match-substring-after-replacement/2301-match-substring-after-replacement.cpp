class Solution {
public:
    bool matchReplacement(string s, string sub, vector<vector<char>>& v) {
        map<char,set<char>>m;
        if(sub.size()>s.size())return false;
        for(int i=0;i<v.size();i++){
            m[v[i][0]].insert(v[i][1]);
        }
        int n=s.size();int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<sub.size()&&i+j<n;j++){
                if(sub[j]==s[i+j]){
                    c++;
                }
                else if(m[sub[j]].count(s[i+j]))
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
                 if(c==sub.size())
            return true;
                c=0;
        }
          return false;
    }
};