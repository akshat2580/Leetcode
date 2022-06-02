class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        int n=m.size();int k=m[0].size();
      vector<vector<int>> d( k , vector<int> (n));
            for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                d[i][j]=m[j][i];
            }
        }
        return d;
    }
};