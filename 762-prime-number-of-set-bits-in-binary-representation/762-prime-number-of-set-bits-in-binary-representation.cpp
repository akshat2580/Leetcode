class Solution {
public:
    bool p(int n){int s=0;
                  if(n==1)return false;
        for(int i=2;i<=(int)sqrt(n);i++)
        {
            if(n%i==0)s++;
        }
        if(s==0)return true;
        else return false;
    }
    int countPrimeSetBits(int l, int r) {int c=0;
        
        for(int i=l;i<=r;i++)
        {
           if( p(__builtin_popcount(i)))c++;
        }
     return c;
    }
};