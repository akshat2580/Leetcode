class Solution {
public:
    vector<vector<int>>v;
    void solve(vector<int>&k,vector<int>&r,int i,int n){
        if(i==n){v.push_back(r);
            return;}
        r.push_back(k[i]);
        solve(k,r,i+1,n);
        r.pop_back();
        solve(k,r,i+1,n);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>r;
        solve(nums,r,0,nums.size());
        return v;
    }
};