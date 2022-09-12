class Solution {
public:
    int bagOfTokensScore(vector<int>& s, int p) {
        sort(s.begin(),s.end());
        int l=0,h=s.size()-1;
        int n=0,c=0;
        while(l<=h &&(p>=s[l]||n>0)){
            while(l<=h&&p>=s[l]){
                p-=s[l++];n++;
            }
            c=max(c,n);
            if(l<=h&&n>0){p+=s[h--];
            n--;}
        }
        
    return c;
    }
};