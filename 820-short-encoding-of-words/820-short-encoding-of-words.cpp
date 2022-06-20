class Solution {
public:
    int minimumLengthEncoding(vector<string>& w) {
        map<string,int>m;
        int n=w.size();
        int c=0;
        for(auto i:w)
        {if(m[i]==0)
        { m[i]++;
               c+=i.size();}
        }
        for(auto i:m)
        { string s=i.first;
            for(int j=1;j<s.size();j++){
                if(m[s.substr(j,s.size()+1)])
                {c=c-s.size()+j;
                m[s.substr(j,s.size()+1)]=0;
                }
            }
         }
        for(auto i:m)if(i.second)c++;
        return c;
    }
};