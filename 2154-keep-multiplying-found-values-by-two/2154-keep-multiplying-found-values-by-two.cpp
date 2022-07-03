class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
       int n=nums.size();
        unordered_set<int>m(nums.begin(),nums.end());
        while(m.count(o))o*=2;
        return o;
    }
};