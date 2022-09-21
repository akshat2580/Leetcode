class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& s, vector<vector<int>>& q) {
        vector<int>v;
        int sum=0;
            for(auto i:s)if(i%2==0)sum+=i;
        for(int i=0;i<q.size();i++){
            if(s[q[i][1]]%2==0)sum-=s[q[i][1]];
            s[q[i][1]]+=q[i][0];
            
            if(s[q[i][1]]%2==0) sum+=s[q[i][1]];
            v.push_back(sum);
        }
        return  v;
    }
};