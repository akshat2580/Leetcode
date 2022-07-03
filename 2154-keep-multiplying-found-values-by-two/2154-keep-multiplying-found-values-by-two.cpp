class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
       int n=nums.size();
       unordered_map<int,int>m;
        for(auto i:nums)m[i]++;
        while(m[o])o*=2;
        return o;
    }
};