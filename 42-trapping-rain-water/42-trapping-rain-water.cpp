class Solution {
public:
    int trap(vector<int>&a) {
        int n=a.size(),c=0;
     int i=0,j=n-1,l=0,r=0;
        while(i<j){
           if(a[i]<a[j]){
               if(a[i]>=l)
               l=a[i];
               else
                   c+=l-a[i];
               i++;
           } 
            else
            {
               if(a[j]>=r)
                   r=a[j];
                else
                    c+=r-a[j];
                j--;
            }
        }
        return c;
    }
};