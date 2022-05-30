class Solution {
public:
    int searchInsert(vector<int>& n, int t) {int s=n.size()/2;int l=0,r=n.size()-1;
        int m;
        while(l<=r){
            m=(l+r)/2;
            
                     if(n[m]<t)
                        l=m+1;
                    else
                        r=m-1;
            
            
            
            
        }
        
       return l; 
        
    }
};