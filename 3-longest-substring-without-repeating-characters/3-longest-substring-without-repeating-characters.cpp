class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();int c=0,j=0;
         unordered_set<char>r;
        for(int i=0;i<n&&j<n;){
          if(r.find(s[j])==r.end())
          {
              r.insert(s[j++]);
              c=max(c,j-i); 
          }else
              
            r.erase(s[i++]);
        }
        return c;
    }
};
