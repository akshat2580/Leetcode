class Solution {
public:
    bool isPalindrome(string s) {
       string h="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
                h+=tolower(s[i]);
        } 
        int i=0,j=h.size()-1;
        cout<<h;
        while(i<j){
          if(h[i++]!=h[j--])  return 0;
        }
        return 1;
    }
};