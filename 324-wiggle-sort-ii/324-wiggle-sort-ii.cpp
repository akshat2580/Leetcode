class Solution {
public:
   void wiggleSort(vector<int>& s) {
    vector<int> v(s);
    sort(v.begin(), v.end());
    for (int i=s.size()-1, j=0, k=i/2+1; i>=0; i--)
        s[i] = v[i%2 ? k++ : j++];
}
};