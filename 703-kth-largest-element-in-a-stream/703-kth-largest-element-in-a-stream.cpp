class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int s;
    KthLargest(int k, vector<int> v) {
        s=k;
        for(int i=0;i<v.size();i++) {
            pq.push(v[i]);
            if(pq.size()>k) pq.pop();
        }
    }
    
    int add(int v) {
        pq.push(v);
        if(pq.size()>s) pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */