class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size(), ans=1, j=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i < n; i++)    if(nums[i]-nums[j] > k)     ans++, j=i;
        return ans;
    }
};