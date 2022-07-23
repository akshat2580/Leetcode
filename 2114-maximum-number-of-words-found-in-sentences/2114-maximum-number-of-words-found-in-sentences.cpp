class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int c=0;
        for(auto i:s){
            int v=1;
            for(auto j:i)if(j==' ')v++;
            c=max(c,v);
        }
        return c;
    }
};