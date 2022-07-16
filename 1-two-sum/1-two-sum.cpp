class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int a=0,b=0;
        map<int,int>m;
       
       for(int i=0;i<nums.size();i++)
       {
           if(m.find(t-nums[i])!=m.end())return {m[t-nums[i]],i};
           m[nums[i]]=i;
       }
        return {};
    }
};