class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int k=0,l=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1])k++;
            if(nums[i]>=nums[i+1])
                l++;
            
        }
        if(l==nums.size()-1||k==nums.size()-1)return true;
        else
            return false;
    }
};