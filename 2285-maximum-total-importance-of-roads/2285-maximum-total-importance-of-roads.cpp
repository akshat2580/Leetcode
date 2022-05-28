class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {long long s=0,o=n;
        map<int,int>m;
            for(int i=0;i<roads.size();i++){
              for(int j=0;j<roads[i].size();j++){
                  m[roads[i][j]]++;
              }  
            }
        vector<int>v;
        for(auto i:m)
            v.push_back(i.second);
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--)
        { s+=v[i]*o;o--;}
        return s;
    }
};