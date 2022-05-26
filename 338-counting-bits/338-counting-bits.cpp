
class Solution {
  int  binary(int x)
    {
        
     int c=0;
   while(x){   c+=x&1;
      x>>=1;
             } 
      return c;
    }
public:
    
    vector<int> countBits(int n) {vector<int> v(n+1);v[0]=0;
        for(int i=1;i<=n;i++){
            
           
                v[i]=binary(i);
            
            
            
        }return v;
    }
};