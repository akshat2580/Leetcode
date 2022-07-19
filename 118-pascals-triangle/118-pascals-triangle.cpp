class Solution {
public:
    vector<vector<int>> generate(int num) {vector<vector<int>> v;vector<int>ans;
     int s=0;int n=num,a=0,b=1  ;int k=0;
        for(int i=1;i<=n;i++)
        {int c=1;
            for(int j=1;j<=i;j++){
                ans.push_back(c);
                c=c*(i-j)/j;
                
                
            }
            v.push_back(ans);
         ans.clear();
            
            
        }
          return v;
                                          
        
        
        
        
        
        
        
        
        
        
        
    }
};