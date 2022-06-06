class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>&v){
        if(i==-1||j==-1||i==v.size()||j==v[0].size()||v[i][j]=='0')
            return;
        
        v[i][j]='0';
        dfs(i,j+1,v);
        dfs(i+1,j,v);
        dfs(i-1,j,v);
        dfs(i,j-1,v);
    }
    int numIslands(vector<vector<char>>& g) {
        int n=g.size(),m=g[0].size(),a=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]=='1')
                {dfs(i,j,g);
                    a++;
                }
            }
        }
        return a;
    }
};