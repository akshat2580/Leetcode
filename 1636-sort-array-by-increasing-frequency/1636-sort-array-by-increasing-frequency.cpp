class Solution {
public:
   static bool cmp(pair<int,int>& a,pair<int,int>& b){
        
        if(a.second==b.second)return a.first>b.first;
        else return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& s) {
        unordered_map<int,int>m;
     vector<pair<int,int>>pq;
        for(auto i:s )m[i]++;
        for(auto i:m){
            pq.push_back({i.first,i.second});
        }
        sort(pq.begin(),pq.end(),cmp);
        vector<int>v;
for(auto i:pq){
    int k=i.second;
    while(k--)
    v.push_back(i.first);
}        
    return v;
    }
};