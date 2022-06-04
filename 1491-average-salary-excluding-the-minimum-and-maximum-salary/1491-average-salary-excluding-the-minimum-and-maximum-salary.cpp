class Solution {
public:
    double average(vector<int>& s) {double c=0;int j=INT_MAX,k=INT_MIN;
           return (accumulate(begin(s), end(s), 0.) - *min_element(begin(s), end(s)) 
        - *max_element(begin(s), end(s))) / (s.size() - 2);
    }
};