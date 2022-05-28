class Solution {
public:
    string largestWordCount(vector<string>& m, vector<string>& s) {int k=0,l=0;vector<string>v;vector<int>w;string e="";
        for(auto i:m){string q=i;int u=0;
            for(int j=0;j<q.size();j++)
                if(q[j]==' ')u++;
            w.push_back(u+1);}
                                                                                                                         
               map<string,int>o;
                       for(int i=0;i<w.size();i++)
                           o[s[i]]+=w[i];
                
                for(auto i:o){
                    if(i.second>=k)
                    {e=max(i.first,e);k=i.second;}
                }
                return e;
    }
};