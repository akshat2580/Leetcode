class Solution {
public:
    int climbStairs(int n) {
        if(n<=3)return n;

       int a=0,b=1,c=0;
        for(int i=0 ; i<n ; i++){
          c=a+b;
            a=b;b=c;
        }
        return b;
    }
};