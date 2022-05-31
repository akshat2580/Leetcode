class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k)return false;
      
        set<string>t;
        for(int i=0;i<=s.size()-k;i++){string r="";
          for(int j=i;j<i+k;j++){
                    r+=s[j];             
        }
                                      t.insert(r);    
                                     }
        return (t.size()==pow(2,k));
           
    }
};