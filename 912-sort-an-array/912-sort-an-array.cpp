class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       vector<int>v;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i:nums)pq.push(i);
        while(pq.size()>0){
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
    }
};