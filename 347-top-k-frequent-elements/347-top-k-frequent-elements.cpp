class Solution {
public:
    vector<int> topKFrequent(vector<int>& s, int k) {
        vector<int>v;
        unordered_map<int,int>m;
        for(auto i:s)m[i]++;
        priority_queue<pair<int,int>>pq;
        for(auto i:m){
            pq.push({i.second,i.first});
                     }
        while(k--){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};