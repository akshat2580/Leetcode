class Solution {
public:
    vector<int> frequencySort(vector<int>& s) {
        unordered_map<int,int>m;
     priority_queue<pair<int,int>>pq;
        for(auto i:s )m[i]++;
        for(auto i:m){
        pq.push({-i.second,i.first});
        }
        vector<int>v;
    while(pq.size()){
    int k=-pq.top().first;
    while(k--)
    v.push_back(pq.top().second);
    pq.pop();
}        
        
    return v;
    }
};