class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums)m[i]++;
        nums={};
        for(auto i:m)
            while(i.second--)
            nums.push_back(i.first);
        
    }
};