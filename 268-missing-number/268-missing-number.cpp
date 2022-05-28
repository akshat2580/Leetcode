class Solution {
public:
    int missingNumber(vector<int>& v) {int n=v.size();
        long long s=n*(n+1)/2,p=0,m=-1;
        sort(v.begin(),v.end());
          for(int i=0;i<n;i++)
              p+=v[i];
                                       m=s-p;
                                      
                                       if(m==0)
                                       return 0;
                                    
                                           
                                       else
                                           return m;
                                               
    }
};