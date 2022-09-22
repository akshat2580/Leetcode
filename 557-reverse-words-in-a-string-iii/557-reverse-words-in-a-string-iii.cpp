
class Solution {
public:
    string reverseWords(string s) {string a;string r=" ";
                                   
       for(int i=0;i<s.size();i++)
       { 
           if(s[i]==' ')
           {
               for(int i=r.size()-1;i>=0;i--)
               a+=r[i];
               r=" ";
               
               
           }
           else
           {
               r+=s[i];
               
               
               
           }
           
           
        }for(int i=r.size()-1;i>=1;i--)
               a+=r[i];
                              
                                   return a;
                                      
           
    }
};