class Solution {
public:
    int countElements(vector<int>& s) {
        int n=s.size();
    map<int,int>m;for(auto i:s)m[i]++;
        nth_element(s.begin(),s.begin()+n-1,s.end());
        nth_element(s.begin(),s.begin(),s.end());
      
       if(s[0]==s[n-1])return 0;
        return n-m[s[0]]-m[s[n-1]];
    }
};