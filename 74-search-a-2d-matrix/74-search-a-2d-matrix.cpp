class Solution {
public:
   bool searchMatrix(vector<vector<int>>& m, int t) {
        int rows = m.size(),
			cols = m[0].size(),
            row = 0, col = cols - 1;
			
        while (row < rows && col > -1) {
            int cur = m[row][col];
            if (cur == t) return true;
            if (t > cur) row++;
            else col--;
        }
        
        return false;
    }
};