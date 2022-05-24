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
