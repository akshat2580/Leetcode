class Solution {
public:
    vector<vector<int>>v;
    void solve(vector<int>&t,vector<int>r,int i,int n){
    if(i==n){sort(r.begin(),r.end());
        v.push_back(r);
        return ;}
        r.push_back(t[i]);
        solve(t,r,i+1,n);
            r.pop_back();
    solve(t,r,i+1,n);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>r;
        solve(nums,r,0,nums.size());
        set<vector<int>>d(v.begin(),v.end());
        vector<vector<int>>w(d.begin(),d.end());
        return w;
    }
};