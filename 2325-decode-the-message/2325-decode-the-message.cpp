class Solution {
public:
    string decodeMessage(string key, string me) {
        map<char,char>m;
        string s="";char ch='a';
        for(int i=0;i<key.size();i++)
            if(key[i]!=' '&&!m[key[i]]&&ch!=26)
            {m[key[i]]=ch++;
            }
        for(auto i:me)
            if(i!=' ')
            s+=m[i];
        else s+=' ';
        return s;
    }
};