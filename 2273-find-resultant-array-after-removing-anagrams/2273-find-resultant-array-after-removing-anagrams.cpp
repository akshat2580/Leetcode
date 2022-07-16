class Solution {
public:
    int is(string a,string b){
        map<char,int>m;
                              if(a.size()!=b.size())return 0;
                             
                             sort(a.begin(),a.end()) ;  sort(b.begin(),b.end()) ;
                              
       for(int i=0;i<a.size();i++)
                  if(a[i]!=b[i])return 0;            
        return 1;
    }
    
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i=words.size()-1;i>0;i--){
            if(is(words[i],words[i-1]))
                words.erase(words.begin()+i);
            
        }
        return words;
    }
};