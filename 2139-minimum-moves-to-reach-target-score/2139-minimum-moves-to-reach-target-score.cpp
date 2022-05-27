class Solution {
public:
    int minMoves(int t, int m) {int c=0;int s=0;
        if(m==0)                 
        return t-1;
          else
          {
              while(m>0&&t>0){
                 if(t%2==0){
                c++;
                m--;
                t = t/2;
            }
            else{
                c++;
                t--;
            }
              } }
              return c+t-1;
    }
};