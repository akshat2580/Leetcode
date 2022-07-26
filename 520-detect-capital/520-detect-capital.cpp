class Solution {
public:
    bool detectCapitalUse(string s) {
        char m=' ';int n=s.size(),c=0;
        for(int i=0;i<n;i++)
        {if(s[i]>=65 && s[i]<=90)
        { m=s[i];c++ ;  }
        }
           if(c==n)return true;
        else if(c==1 && m==s[0])return true;
        else if(c==0)return 1;
        return false;
    }
};