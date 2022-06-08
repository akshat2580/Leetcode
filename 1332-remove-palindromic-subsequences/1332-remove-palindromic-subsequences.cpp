class Solution {
public:
    bool p(string s){int j=s.size()-1;
        for(int i=0;i<=j;i++){
            if(s[i]!=s[j--])
                return false;
        }
                     return true;
    }
    int removePalindromeSub(string s) {
        
       
         if(p(s))return 1;
        else return 2;
    }
};