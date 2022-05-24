class Solution {
public:
  
void p(vector<vector<int>>&a,vector<int> n ,int s){
        if(s==0){
            a.push_back(n);
        }
      else{
          for(int i=s;i>=0;i--){
              swap(n[i],n[s]);
              p(a,n,s-1);
          }
         
      } 
    }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>>v;
       p(v,nums,nums.size()-1); 
        return v;
    }
};
// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> perms;
//         permute(nums, 0, perms);
//         return perms;
//     }
// private:
//     void permute(vector<int> nums, int i, vector<vector<int>>& perms) {
//         if (i == nums.size()) {
//             perms.push_back(nums);
//         } else {
//             for (int j = i; j < nums.size(); j++) {
//                 swap(nums[i], nums[j]);
//                 permute(nums, i + 1, perms);
//             }
//         }
//     }
// };