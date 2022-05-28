class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>v;
      for(int j=0;j<image.size();j++)  {
          vector<int>l;
            for(int i=image.size()-1;i>=0;i--)
                l.push_back(image[j][i]);
                 v.push_back(l);
        }
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                v[i][j]^=1;
            }
        }
        return v;
        
    }
};