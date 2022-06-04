class Solution {
public:
    vector<vector<string>>v;
    bool c(vector<string>&s,int r,int m){
        for(int i=r;i>=0;i--)
            if(s[i][m]=='Q')return false;
        for(int i=r,j=m;i>=0&&j>=0;--i,--j)
            if(s[i][j]=='Q')return false;
        for(int i=r,j=m;j<s.size()&&i>=0;--i,++j)
            if(s[i][j]=='Q')return false;
        return true;
        
    }
    
    void d(vector<string>&s,int n){
        if(n==s.size()){
            v.push_back(s);
            return;
        }
        for(int i=0;i<s.size();i++)
            if(c(s,n,i)){
                s[n][i]='Q';
                d(s,n+1);
                s[n][i]='.';
            }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string>s(n,string(n,'.'));
        d(s,0);
        return v;
    }
};

   
       