class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>e;
        vector<int>o;
        vector<int>v;
        for(auto i:nums)if(i>0)e.push_back(i);
        else o.push_back(i);
        
            int n=nums.size(),k=0,l=0;
            for(int i=0;i<n;i++)
                if(i%2)
                    v.push_back(o[l++]);
                    else
                        v.push_back(e[k++]);
        return v;
    }
};