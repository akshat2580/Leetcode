class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int> pq;
        for (int i = 0; i < h.size() - 1; i++) {
            int j= h[i + 1] - h[i];
            if (j>0)
                pq.push(-j);
            if (pq.size() > l) {
                b+= pq.top();
                pq.pop();
            }
            if (b<0)
                return i;
        }
        return h.size() - 1;
    }
};