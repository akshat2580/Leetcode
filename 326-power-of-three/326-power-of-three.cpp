class Solution {
public:
    bool isPowerOfThree(int n) {
        if(!n)return false;
        return fmod(log10(n)/log10(3), 1)==0;
    }
};