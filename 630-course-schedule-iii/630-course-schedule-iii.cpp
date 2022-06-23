class Solution {
public:
    int scheduleCourse(vector<vector<int>>& c) {
        if(c.size() <= 0) return 0;
        sort(c.begin(), c.end(), [](const vector<int>& a,const vector<int>& b) {
            return a[1] < b[1];
        });
        priority_queue<int> q;
        int s=0;
        for(auto i : c) {
            s+=i[0];
            q.push(i[0]);
            if(s>i[1]) {
                s-=q.top();
                q.pop();
            }
        }
        return q.size();
    }
};