class Solution {
public:
    void moveZeroes(vector<int>& s) {
        int n=s.size();int j=0;
        for(int i=0;i<n;i++){
            if(s[i]!=0){
          swap(s[i],s[j++]);
            }
        }
    }
};