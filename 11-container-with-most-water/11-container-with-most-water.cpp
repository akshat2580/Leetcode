class Solution {
public:
    int maxArea(vector<int>& s) {
      int c=0,l=0,r=s.size()-1;
        while(l<r){
            c=max(c,min(s[l],s[r])*(r-l));
                if(s[l]<s[r])l++;
            else r--;
        }return c;
    }
};