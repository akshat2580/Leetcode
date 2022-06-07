class Solution {
public:
    vector<vector<int>>v;
    void dfs(vector<int>&c,vector<int>a,int i,int t)
    {
        if(t<0)return;
        if(t==0){
            v.push_back(a);
            return;
        }
        set<int> used;
        for(int j=i;j<c.size();j++){
            if(used.count(c[j]))continue;
            a.push_back(c[j]);
            dfs(c,a,j+1,t-c[j]);
            a.pop_back();
            used.insert(c[j]);
        }
    
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<int>a;
        dfs(c,a,0,t);
        return v;
    }
};