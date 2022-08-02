class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {
     priority_queue<int>pq;
        int n=0;
       vector<int >ll;
        for(auto i:v){for(auto j:i)ll.push_back(j);}
        while(n<ll.size()){
            pq.push(ll[n++]);
            while(pq.size()>k)pq.pop();
        }
        return pq.top();
    }
};