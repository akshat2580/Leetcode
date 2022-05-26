
class Solution {
//   int  binary(int x)
//     {
        
//      int c=0;
//    while(x>0){   c=c+x%2;
//       x/=2;
//              } 
//       return c;
//     }
public:
    
    vector<int> countBits(int n) {vector<int> v(n+1);v[0]=0;
        for(int i=1;i<=n;i++){
            
           
                v[i]=__builtin_popcount(i);
            
        }return v;
    }
};