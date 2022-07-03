class Solution {
public:
    int dominantIndex(vector<int>& s) {
        int n=s.size();int k=0;
      int m=*max_element(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(m==s[i])k=i;
            else if(m<2*s[i])return -1;
           
        }
         return k;
    }
};