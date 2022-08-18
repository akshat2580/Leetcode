class Solution {
public:
    int minSetSize(vector<int>& a) {
        unordered_map<int,int>m;
        for(auto i:a)m[i]++;
        int n=a.size()/2;
        priority_queue<pair<int,int>>pq;
        for(auto i:m)pq.push({i.second,i.first});
int k=0,c=0;
        while(k<n){
           k+= pq.top().first;c++;
            pq.pop();
        }
        return c;
    }
};