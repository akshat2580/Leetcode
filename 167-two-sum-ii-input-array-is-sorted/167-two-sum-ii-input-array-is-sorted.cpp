class Solution {
public: 
    vector<int> twoSum(vector<int>&s, int t) {
        int l=0,r=s.size()-1;
       while(l<r){
           if(s[l]+s[r]==t)return {l+1,r+1};
           else if(s[l]+s[r]>t)r--;
           else l++;
       }
        return {};
    }
};