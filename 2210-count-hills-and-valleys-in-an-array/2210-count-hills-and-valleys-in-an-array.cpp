class Solution {
public:
    int countHillValley(vector<int>& s) {
        int c=0,n=s.size();
        vector<int>v;
        for(int i=0;i<n;i++)
            if(i!=0&&i!=n-1&&s[i+1]==s[i])continue;
        else
            v.push_back(s[i]);
        
        for(int i=1;i<v.size()-1;i++){
            if(v[i-1]>v[i]&&v[i]<v[i+1])c++;
            else if(v[i-1]<v[i]&&v[i]>v[i+1])c++;
            
        }
        return c;
    }
};