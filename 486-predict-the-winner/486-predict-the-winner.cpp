class Solution {
public:
    int sol(vector<int>&v,int x,int y,int i ){
         if (x==y)
            return i*v[x];
        int a = i*v[x] + sol(v,x+1,y,-i);
        int b = i*v[y] + sol(v,x,y-1,-i);
        return i* max(i*a,i*b); 
        
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        return sol(nums,0,nums.size()- 1,1)>=0;
    }
};