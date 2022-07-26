class Solution {
public:
    int minSubArrayLen(int t, vector<int>& s) {
        int c=INT_MAX,i=0,j=0,k=0;
        while(j<s.size()){
            k+=s[j];
            while(k>=t){
c=min(c,j-i+1);
                k-=s[i++];
            }
            j++;
        }
        return c==INT_MAX?0:c;
    }
};