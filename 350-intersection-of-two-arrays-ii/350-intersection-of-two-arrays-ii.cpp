class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       vector<int> v;
        for(auto i=nums1.begin();i!=nums1.end();++i){
            for(auto j=nums2.begin();j!=nums2.end();++j){
                if(*i==*j)
                {   v.push_back(*i);
                *j=-2;
                *i=-1;}
                
            }
        }
        
        return v;
    }
};