class Solution {
public:
    char nextGreatestLetter(vector<char>& s, char t) {
        int r=s.size(),l=0;
    while(l<r){
    int m=l+(r-l)/2;
     if(s[m]>t){
         r=m;
    }
        else l=m+1;
}
        return s[l%s.size()];
    }
};