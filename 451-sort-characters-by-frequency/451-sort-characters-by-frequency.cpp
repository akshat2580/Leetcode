class Solution {
public:
    string frequencySort(string s) {
       string k="";map<char,int>m;
        priority_queue<pair<int,char>>q;
        for(auto i:s)m[i]++;
        for(auto i:m)q.push({i.second,i.first});
        while(q.size()){auto i=q.top();q.pop();
            int l=i.first;
            while(l--)k+=i.second;
        }
        return k;
    }
};