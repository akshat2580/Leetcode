class Solution {
public:
    vector<int> searchRange(vector<int>& s, int t) {
        int l=0,r=s.size()-1;
        vector<int>v(2,-1);
         while(l<=r){
            int m=l+(r-l)/2;
            if(t==s[m]){v[0]=m;r=m-1;}
                
        else if(t<s[m])r=m-1;
            
            else l=m+1;
        }
        l=0,r=s.size()-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(t==s[m]){v[1]=m;l=m+1;}
                
        else if(t<s[m])r=m-1;
            
            else l=m+1;
        }
        return v;
    }
};