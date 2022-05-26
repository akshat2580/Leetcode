class Solution {
public:
    int longestConsecutive(vector<int>& v) {
       int m=0;int c=1;
        if(v.size()==0)return 0;
        sort(v.begin(),v.end());
       
        for(int i=0;i<v.size()-1;i++)
        {if(v[i]==v[i+1])continue;
else if(v[i]-v[i+1]==-1)c++;
        else
        { m=max(c,m);c=1;}}
        return max(m,c);
    }
};