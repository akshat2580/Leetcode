class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        priority_queue<pair<double,pair<int,int>>>p;
        for(auto i:a){
            int x=i[0],y=i[1];
            p.push({sqrt(x*x+y*y),{x,y}});
            if(p.size()>k)p.pop();
        }
        vector<vector<int>>v;
        while(p.size()){
            v.push_back({p.top().second.first,p.top().second.second});
            p.pop();
        }
        return v;
    }
};