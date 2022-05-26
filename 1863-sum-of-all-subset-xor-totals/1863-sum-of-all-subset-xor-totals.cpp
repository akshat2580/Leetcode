class Solution {
public:
    int s=0;
    void p(vector<int>&v,int n,int r){
        if(n==v.size())
        { s+=r;return;}
            p(v,n+1,r);
        p(v,n+1,r^v[n]);
        
    }
    
    int subsetXORSum(vector<int>& n) {
       if(n.size()==0)return 0;
        p(n,0,0);
        return s; 
    }
};