class Solution {
public:
   static bool cmp(string &a,string &b){
        if(a.size()==b.size())return a<b;
     
        else
            return a.size()<b.size();
    }
    string kthLargestNumber(vector<string>& nums, int k) {
       int n=nums.size();
                string c="";

        // map<string,int>m;
        // for(int i=0;i<n;i++){
        //     m[nums[i]]=nums[i].size();
        // }
        // for(auto i:m){
        //     if
        //     if(k==0)break;
        //     else c=to_string(i);
        //     k--;
        // }
        sort(nums.begin(),nums.end(),cmp);
        c=nums[n-k];
        
        return c;
    }
};