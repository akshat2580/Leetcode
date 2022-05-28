class Solution {
public:
    string restoreString(string s, vector<int>& indices) {int j=0;
       int n=s.size();
        string r="";
        vector<pair<int,char>>v(n);
        for(int i=0;i<n;i++)
        {   v[j].first=indices[i];
            v[j].second=s[i]; j++;} 
          sort(v.begin(),v.end());
                    for(auto i:v)r+=i.second;
                                                          return r;
    }
};