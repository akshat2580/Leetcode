class Solution {
public:
    int minimumCost(vector<int>& s) {
        int c=0;int n=s.size();
        if(n<2)return s[0];
        if(n==2)return s[0]+s[1];
        sort(s.begin(),s.end());
        int f=0;
        for(int i=n-1;i>=0;i--){
           if(f==2){f=0;continue;}
            f++;
            c+=s[i];
        }
        return c;
    }
};