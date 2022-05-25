class Solution {
public:
    void p(vector<vector<int>>&v,int i,int n,int k,vector<int>&a){
      if(a.size()==k){
          v.push_back(a);
          return;
    }
    if(i>n)return;
        a.push_back(i);
        p(v,i+1,n,k,a);
        a.pop_back();
         p(v,i+1,n,k,a);
        a.push_back(i);
        a.pop_back();
    
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>v;vector<int>a;
        p(v,1,n,k,a);
        return v;
    }
};