class Solution {
public:  vector<vector<int>>v;
    void s(vector<int>&a,vector<int>&c,int t,int i){
        if(t<0)return;
        if(t==0)
        {v.push_back(a);
            return;
        }
      for(int j=i;j<c.size();j++)
        {a.push_back(c[j]);
            s(a,c,t-c[j],j);
         a.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<int>a;
        s(a,c,t,0);
        return v;
    }
};