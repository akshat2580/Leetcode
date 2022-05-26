class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        vector<vector<int>> v;int k=0,l=0;vector<int> a;
        for(auto i:s1){
              if(s2.find(i)==s2.end()) 
                    a.push_back(i);
                    
        }
        v.push_back(a);a.clear();
        for(auto i:s2){
           
                if(s1.find(i)==s1.end())
                    a.push_back(i);
                    
                
            
        }
         v.push_back(a);
        
     return v;   
    }

};
