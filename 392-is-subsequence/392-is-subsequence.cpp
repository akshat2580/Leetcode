class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=s.length(),l=t.length(),q=0;          
                   int p=0;                         
                                           
     for(int i=0;i<k;i++)
     { for(int j=p;j<l;j++){
             if(s[i]==t[j])
             {q++;
            
             p=j+1;break;
             
             }
         }
     } 
        if (q==k)
        return true;
          else
          return false;
                                            
        
        
    }
};