class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int c=0;
        map<int,int>m;
        for(auto i:nums)m[i]++;
        for(auto i:m)if(i.second==1)c+=i.first;
        return c;
    }
};