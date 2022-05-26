class Solution {
public:
    int hammingWeight(uint32_t n) {int s=0;
      unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;    
    }
};