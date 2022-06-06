class Solution {
public:
    void solve(int i,int j,vector<vector<int>>&v,int &a){
        if(i==-1||j==-1||i>=v.size()||j>=v[0].size()||v[i][j]==0)
            return;
        a++;
        v[i][j]=0;
        solve(i,j+1,v,a);
        solve(i+1,j,v,a);
        solve(i-1,j,v,a);
        solve(i,j-1,v,a);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                int a=0;
                solve(i,j,grid,a);
                ans=max(ans,a);
                }
            }
        }
        return ans;
    }
};