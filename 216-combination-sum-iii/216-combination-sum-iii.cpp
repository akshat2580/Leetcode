class Solution {
public:
    void dfs(vector<int>&a,vector<vector<int>>&v,int& k,int n,int i){
if(n==0&&k==a.size()){
    v.push_back(a);
    return ;
}
    if(n<0)return;
        for(int j=i;j<=9;j++){
            a.push_back(j);
            dfs(a,v,k,n-j,j+1);
            a.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>v;
        vector<int>a;
        dfs(a,v,k,n,1);
        return v;
    }
};