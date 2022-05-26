class Solution {
public:
    int hammingWeight(uint32_t n) {int s=0;
    unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};