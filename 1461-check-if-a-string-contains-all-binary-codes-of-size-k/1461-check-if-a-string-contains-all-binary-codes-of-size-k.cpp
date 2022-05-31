class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k)return false;
      
        unordered_set<string>t;
        for(int i=0;i<=s.size()-k;i++){string r=s.substr(i,k);
        
                                      t.insert(r);    
                                     }
        return (t.size()==pow(2,k));
           
    }
};