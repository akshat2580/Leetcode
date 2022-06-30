class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long int sum=0;int s=INT_MAX,l=INT_MIN,c=0;
        sort(nums.begin(),nums.end());
        sum=nums[nums.size()/2];
       
        for(auto i:nums)c+=abs(i-sum);
        return c;
    }
};