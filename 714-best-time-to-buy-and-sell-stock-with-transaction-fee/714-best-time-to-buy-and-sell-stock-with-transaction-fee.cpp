class Solution {
public:
    int maxProfit(vector<int>& p, int fee) {
       int c = 0, h = -p[0];
        for (int i = 1; i < p.size(); i++) {
            c = max(c, h+p[i]-fee);
            h = max(h, c-p[i]);
        }
        return c;  
    }
};