class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ioc; // vector for storing the indexed of c present in s
        int n=s.length();
        
        vector<int>ans(n); // answer vector
        
        for(int i=0;i<n;++i){
            if(s[i]==c) 
                ioc.push_back(i);
        }
        
        int m=ioc.size(); // size of ioc vector
        int left=0,right=0;
        
        for(int i=0;i<n;++i){
            
          
            if(i>ioc[right]){
                left=right;
                if(right<m-1)
                    ++right;
            }
                        
            ans[i]=min(abs(ioc[right]-i),abs(ioc[left]-i)); 

        }
        
        return ans;
    }
};