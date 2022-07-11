class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a1, vector<int>& a2) {
      map<int,int>m;vector<int>v;
        for(auto i:a1)m[i]++;
        for(auto i:a2){
            while(m[i]--){
                v.push_back(i);
            }m[i]=-1;
        }
        if(v.size()<a1.size()){
            for(auto i:m){
                if(i.second!=-1)
                while(i.second--)v.push_back(i.first);
            }
        }
        return v;
    }
};