class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       vector<int>v;
        map<int,int>m;
        for(auto i:nums)m[i]++;
        for(auto i:m)
            while(i.second>0){
            v.push_back(i.first);
                i.second--;
            }
        return v;
    }
};