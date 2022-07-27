class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=nums[0],c=0;
        for(int i=0;i<nums.size();i++){
            c+=nums[i];
            m=max(c,m);
            if(c<0)c=0;
        }
        return m;
    }
};