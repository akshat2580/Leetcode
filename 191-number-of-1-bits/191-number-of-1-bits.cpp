class Solution {
public:
    int hammingWeight(uint32_t n) {int s=0;
    return __builtin_popcount(n);  
    }
};