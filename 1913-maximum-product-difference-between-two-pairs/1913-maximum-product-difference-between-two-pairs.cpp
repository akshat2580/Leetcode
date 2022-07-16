class Solution {
public:
    int maxProductDifference(vector<int>& s) {
       priority_queue<int>p;
        priority_queue<int,vector<int>,greater<int>>q;
        for(auto i:s){p.push(i);q.push(i);
            if(p.size()>2)
           
            {
                p.pop();q.pop();}
        }
        int a,b;
        a=p.top();p.pop();b=q.top();q.pop();
        return b*q.top()-a*p.top();
    }
};