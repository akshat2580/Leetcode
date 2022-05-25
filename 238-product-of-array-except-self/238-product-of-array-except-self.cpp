class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int s=1;
        int t=1;
        vector<int> res(n,1);
        
        for(int i=0;i<n;i++){
            res[i]*=s;
            s*=nums[i];
            res[n-1-i]*=t;
            t*=nums[n-1-i];
        }
        return res;
    }
};