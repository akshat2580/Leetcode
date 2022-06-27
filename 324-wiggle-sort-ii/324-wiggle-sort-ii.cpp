class Solution {
public:
   void wiggleSort(vector<int>& s) {
    vector<int> v(s);
    sort(v.begin(), v.end());
       int j=0, k=(s.size()-1)/2+1;
    for (int i=s.size()-1; i>=0; i--)
        if(i%2)
        s[i]=v[k++];
       else
            s[i]= v[j++];
           
}
};