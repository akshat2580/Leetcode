class Solution {
public:
    vector<int> minSubsequence(vector<int>& s) {sort(s.begin(),s.end());
        vector<int>v;int n=0; int sum=0;
        for(int j=0;j<s.size();j++){
         n+=s[j];
           
        }int i;
           for( i=s.size()-1;i>=0;i--){
              
               if(n>=sum)v.push_back(s[i]);
                sum+=s[i];n-=s[i];
               
           }
                                                
                                                return v;
    }
};