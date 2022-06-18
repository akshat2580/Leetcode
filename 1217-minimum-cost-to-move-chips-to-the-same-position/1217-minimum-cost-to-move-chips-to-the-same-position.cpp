class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        int c=0,o=0,e=0;
        map<int ,int>m;
        for(auto i:p)m[i]++;
        for(int i=0;i<p.size();i++){
            if(p[i]%2)o++;
            else e++;
        }
        
        c=min(o,e);
        
        
        return c;
    }
};