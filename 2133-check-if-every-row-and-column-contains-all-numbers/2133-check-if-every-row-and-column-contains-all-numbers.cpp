class Solution {
public:
    bool checkValid(vector<vector<int>>& a) {
        
        for(int i=0;i<a.size();i++){
            map<int,int>m;
            for(int j=0;j<a[0].size();j++)
            {
                m[a[i][j]]++;
            }
             for(int k=1;k<=a.size();k++){
                 if(m[k]==0)return false;
             }  
                                    
        }for(int i=0;i<a.size();i++){
            map<int,int>m;
            for(int j=0;j<a[0].size();j++)
            {
                m[a[j][i]]++;
            }
             for(int k=1;k<=a.size();k++){
                 if(m[k]==0)return false;
             }  
                                    
        }
        
        return true;
    }
};