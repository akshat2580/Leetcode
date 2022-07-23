class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int c=0;
        for(auto i:s){
            string g=i;int v=1;
            for(auto j:g)if(j==' ')v++;
            c=max(c,v);
        }
        return c;
    }
};