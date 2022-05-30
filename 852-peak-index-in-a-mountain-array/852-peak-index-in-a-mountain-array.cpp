class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
     int n=a.size();int r=n-1,l=0, s=0;
        
        
        while(l<r){
            int m=(r+l)/2;
            if(a[m+1]>a[m])l=m+1;
                
                
            else r=m;
        }
        return l;
    }
};