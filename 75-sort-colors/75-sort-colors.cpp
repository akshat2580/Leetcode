class Solution {
public:
   void sortColors(vector<int>& nums) {
        
       int r=0,b=0,l=0;
       for(auto i:nums)if(i==0)r++;
       else if(i==2)b++;
       else l++;
       nums={};
       while(r--)nums.push_back(0);
     
       while(l--)nums.push_back(1);
         while(b--)nums.push_back(2);
    }
};