class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        vector<int>e;
        vector<int>o;
        for(auto i:nums)if(i%2==0)e.push_back(i);
        else o.push_back(i);
        int k=0,l=0;
        for(int i=0;i<n;i++){
            if(i%2==0)
            v.push_back(e[k++]);
            else v.push_back(o[l++]);
        }
        return v;
    }
};