class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(auto i:s)m[i]++;
        string k="";
        priority_queue<pair<int,char>> maxh;
        for(auto i:m)
            maxh.push({i.second,i.first});
        while(maxh.size()){
            int j=maxh.top().first;
            while(j--)
            k+=maxh.top().second;
        maxh.pop();
        }
        return k;
    }
};