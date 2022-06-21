class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        multiset<int> pq;
        for (int i = 0; i < h.size() - 1; i++) {
            int j= h[i + 1] - h[i];
            if (j>0)
                pq.insert(j);
            if (pq.size()>l) {
                b-=*pq.begin();
                pq.erase(pq.begin());
            
            if (b<0)
                return i;
            }
        }
        return h.size() - 1;
    }
};