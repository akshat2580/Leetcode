class Solution {
public: 
    vector<int> twoSum(vector<int>&s, int t) {
        int n=s.size();
         vector<int>v(2);
        int a=0,b=n-1;
        while(a<b){
            if(s[a]+s[b]==t)
            {
                v[0]=a+1;
                v[1]=b+1;
                break;
            }
            else if(t-s[a]<s[b])b--;
            else a++;
                
        }
        return v;
    }
};