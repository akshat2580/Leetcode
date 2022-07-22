class Solution {
public:
    int maxArea(vector<int>& v) {
       int l=0,r=v.size()-1; 
        int m=0;
        while(l<r){
            m=max(m,min(v[l],v[r])*(r-l));

            if(v[l]<v[r])l++;
            else r--;
        }
        return m;
    }
};