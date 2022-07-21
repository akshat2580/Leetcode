class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1)return 1;
        unordered_map<char,int>m;
        int j=0,i=0,c=0;
        while(j<s.size()){
            m[s[j]]++;
            if(m.size()==j-i+1){
                c=max(c,j-i+1);
            }
            while(m.size()<j-i+1){
                m[s[i]]--;
               if(m[s[i]]==0)m.erase(s[i]); 
                   i++;
                
            } j++;
        }
        return c;
    }
};