class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        int c=0,a=1,b=0;
       for(int i=0;i<n;i++)
       {c=a+b;
           a=b;
           b=c;
       }
        return c;
    }
};