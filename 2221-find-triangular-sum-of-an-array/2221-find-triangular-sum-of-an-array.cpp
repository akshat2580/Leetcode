class Solution {
public:
    int triangularSum(vector<int>& s) {int n=s.size();
     
           while(n>1){ vector<int>v;                         
        for(int i=0;i<n-1;i++){
            v.push_back((s[i]+s[i+1])%10);
        }
         s=v;n=v.size();      
           } 
        return s[0];
    }
};