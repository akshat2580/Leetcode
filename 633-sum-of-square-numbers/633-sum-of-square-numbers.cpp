class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long a = 0; a * a <= c; a++) {
            long k=c-a*a;long l=sqrt(k);
            if(l*l==k)
                return true;
            
        }
        return false;
    }
};