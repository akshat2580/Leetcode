class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& s, int k) {
        if (k <= 1) return 0;
        int p = 1, ans = 0, l = 0;
        for (int r= 0; r < s.size(); r++) {
            p *= s[r];
            while (p >= k) p /= s[l++];
            ans += r - l + 1;
        }
        return ans;
    }
};