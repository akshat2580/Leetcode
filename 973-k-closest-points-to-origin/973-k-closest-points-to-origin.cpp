class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& s, int k) {
        priority_queue<pair<double,vector<int>>>pq;
        for(auto i:s){
            int x=i[0];
            int y=i[1];
            pq.push({sqrt(x*x+y*y),{x,y}});
            if(pq.size()>k)pq.pop();
        }
        vector<vector<int>>v;
        while(pq.size()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};