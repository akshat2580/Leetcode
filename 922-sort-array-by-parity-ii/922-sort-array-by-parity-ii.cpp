class Solution {
public:
 vector<int> sortArrayByParityII(vector<int>& A) {
  for (int i = 0, j = 0; i < A.size() && j < A.size(); ) swap(
      *find_if(begin(A) + i, end(A), [&] (int v) { return (i++ % 2 == 0 && v % 2 != 0) || i == A.size(); }),
      *find_if(begin(A) + j, end(A), [&] (int v) { return (j++ % 2 != 0 && v % 2 == 0) || j == A.size(); }));
  return A;
}
};