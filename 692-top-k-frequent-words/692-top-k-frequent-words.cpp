class Solution {
public:
    vector<string> topKFrequent(vector<string>& w, int k) {vector<string>v;
        map<string,int>m;map<int,multiset<string>>f;int r=0;
        for(auto i:w)
            m[i]++;
        for(auto i:m){
            f[i.second].insert(i.first);
            r=max(r,i.second);
        }
        for(int i=r;i>=0&&k;i--){
            
            if(f.count(i)){
            
                while(f[i].size()&&k){
                 v.push_back(*f[i].begin());
                f[i].erase(f[i].begin());
                    k--;
                }
            }
        }
                                                          
        return v;
    }
};
 