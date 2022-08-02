class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {
     priority_queue<int>pq;
        int i=0,j=0;
       for(auto i:v)
           for(auto j:i)
           {     pq.push(j);
        while(pq.size()>k)pq.pop();
           }
        return pq.top();
    }
};