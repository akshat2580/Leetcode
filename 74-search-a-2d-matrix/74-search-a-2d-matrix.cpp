class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
       int m=a[0].size(),n=a.size();
       if(m*n==1)return a[0][0]==t;
        vector<int>v;
        for(auto i:a){
            for(auto j:i){v.push_back(j);}
        }
        int l=0,r=v.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]==t)return true;
            else if(v[mid]>t)r=mid-1;
            else l=mid+1;
        }
        return false;
    }
};