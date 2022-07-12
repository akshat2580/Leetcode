class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int l=0,r=a.size()-1;
        
        while(l<r){
            int m=l+(r-l)/2,next=(m+1)%(a.size());
            if(a[m]>a[next]) r= m;
           
            else l=next;
        }
        return l;
    }
};