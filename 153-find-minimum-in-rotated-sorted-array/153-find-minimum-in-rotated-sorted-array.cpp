class Solution {
public:
    int findMin(vector<int>& n) {int s=0;
        int l=0,r=n.size()-1;int j=INT_MAX;
                                 if(r==0)return n[0];
      if(n[r]>n[0])return n[0];
                                 while(l<=r){
          int m=(r+l)/2;
          if(n[m]>n[m+1])return n[m+1];
          if(n[m-1]>n[m])return n[m];
          if(n[m]>n[0])l=m+1;
            else r=m-1;
          
      }
                                 
        return -1;
    }
};