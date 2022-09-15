class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        unordered_map<int,int>m;vector<int>v;
        if(c.size()%2==1)return {};
        for(auto i:c)m[i]++;
        sort(c.begin(),c.end());
        for(int i=0;i<c.size();i++){
            if(m[c[i]]==0)continue;
            if(m[c[i]*2]>0){
                v.push_back(c[i]);
            }
            if(m[c[i]*2]==0) {
                v={};break;
            }
            m[c[i]*2]--;
            m[c[i]]--;
        }return v;
    }
};