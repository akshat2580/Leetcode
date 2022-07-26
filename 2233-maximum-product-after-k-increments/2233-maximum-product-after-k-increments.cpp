class Solution {
public:
    int maximumProduct(vector<int>& s, int k) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(auto i:s)q.push(i);
        while(k--){
            int j=q.top()+1;q.pop();
            q.push(j);
        }
        long long c=1;
        while(q.size()){c=c%(1000000000+7);
            c*=q.top();q.pop();
        }
        c=c%(1000000000+7);
        return (int)c;
    }
};