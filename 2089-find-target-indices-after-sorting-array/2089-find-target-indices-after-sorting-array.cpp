class Solution {
public:
     vector<int> targetIndices(vector<int>& A, int target) {
        int cnt = 0, rank = 0; 
        for (int n : A) {
            cnt += n == target;
            rank += n < target;
        }
        vector<int> ans;
        while (cnt--) ans.push_back(rank++);
        return ans;
    }
};