class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        string s1="",s2="";
        int n=s.size();
        for(int i=0;i<n;i++){
        if(((int)s[i])%2==0)s1+=s[i];
            else s2+=s[i];
        }
        string d="";
        sort(s1.begin(),s1.end(),greater<int>());
        sort(s2.begin(),s2.end(),greater<int>());
        int k=0,l=0;
        for(int i=0;i<n;i++){
            if(((int)s[i])%2==0)d+=s1[k++];
            else d+=s2[l++];
        }
        return stoi(d);
    }
};