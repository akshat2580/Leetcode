class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& s) {
       map<int,int>m;int n=s.size();int c=INT_MAX;
        for(int i=0;i<n;i++){
            if((s[i][0]==x||s[i][1]==y))
            {            if(m.find((abs(x-s[i][0])+abs(y-s[i][1])))==m.end())
                m[(abs(x-s[i][0])+abs(y-s[i][1]))]=i;
            c=min(c,(abs(x-s[i][0])+abs(y-s[i][1])));
            }
        }
        if(m.find(c)==m.end())return -1;
        return m[c];
    }
};