class Solution {
public:
    bool searchMatrix(vector<vector<int>>& k, int t) {
        // if(k.size()==1&&k[0].size()==1)return k[0][0]==t;
        int l=0,r=k[0].size()-1;
              while(l<=k.size()-1 && r>=0){
                 
                  if(k[l][r]==t)return true;
                  else if(k[l][r]>t)r-=1;
                  else l++;
              }
        
      return 0;
    }
};