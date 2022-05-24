class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {int c=0,k=0,l=0;
       for(int i=0;i<9;i++){map<char,int>m;
                            map<char,int>n;
           for(int j=0;j<9;j++){
               if(a[i][j]!='.')
               m[a[i][j]]++;
               if(a[j][i]!='.')
               n[a[j][i]]++;
           }
           
        for(auto i:m)if(i.second>1)c++;
        for(auto i:n)if(i.second>1)c++;
       } 
      while(k<9){ 
          l=0;
         while(l<9){
             map<char,int>m;
        for(int i=k;i<3+k;i++){
             for(int j=l;j<3+l;j++){
                if(a[i][j]!='.')
                 m[a[i][j]]++;
             }        
         }
          for(auto i:m)if(i.second>1)c++;
                         
              l+=3;}
                 k+=3;                                   
         }                                        
       if(c>0)return false;
    else   return true;
    }
};