class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        for(int i=0;i<v.size();i++){
            int l=0,r=v[i].size()-1;
              while(l<=r){
                  int m=l+(r-l)/2;
                  if(v[i][m]==t)return true;
                  else if(v[i][m]>t)r=m-1;
                  else l=m+1;
              }
        }
      return 0;
    }
};