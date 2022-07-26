class Solution {
public:
    int arrayPairSum(vector<int>& s) {
        sort(s.begin(),s.end());
        int c=0;
        for(int i=0;i<s.size()-1;i+=2){
            c+=min(s[i],s[i+1]);
        }
        return c;
    }
};