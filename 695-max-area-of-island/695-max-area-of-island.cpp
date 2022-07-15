class Solution {
public:
    void sol(vector<vector<int>>&v,int& a,int i ,int j){
        if(i==-1||j==-1||j>=v[0].size()||i>=v.size()||v[i][j]==0)
            return ;
        a++;
        v[i][j]=0;
        sol(v,a,i+1,j);
        sol(v,a,i,j+1);
        sol(v,a,i-1,j);
        sol(v,a,i,j-1);
            
    }
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a=0;
                sol(g,a,i,j);
                ans=max(ans,a);
            }
        }
        return ans;
    }
};