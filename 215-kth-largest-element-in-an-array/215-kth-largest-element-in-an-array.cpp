class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size(),c=0;
        multiset<int,greater<int>>s(nums.begin(),nums.end());
        for(auto i=s.begin();i!=s.end();i++){
         if(k!=0)c=*i;
            else break;
            k--;   
        }
        return c;
    }
};