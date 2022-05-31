class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k)return false;
      
        set<string>t;
        for(int i=0;i<=s.size()-k;i++){
          
                 t.insert(s.substr(i,k));                     
        }
        return (t.size()==pow(2,k));
           
    }
};