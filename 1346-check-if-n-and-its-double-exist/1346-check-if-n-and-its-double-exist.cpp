class Solution {
public:
    bool checkIfExist(vector<int>& v) {
        unordered_map<int,int>m;
        for(auto i:v)m[i]++;
        for(auto i:m){
            if((i.first==0) && i.second>1)return 1;
             if(m.find(i.first*2)!=m.end() && i.first!=0)return 1;
        }
        return 0;
    }
};