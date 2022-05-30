class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long a = 0; a * a <= c; a++) {
            long k=c-a*a;double l=sqrt(k);
            if(l==(int)l)
                return true;
            
        }
        return false;
    }
};