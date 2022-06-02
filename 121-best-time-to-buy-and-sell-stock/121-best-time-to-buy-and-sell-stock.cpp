class Solution {
public:
     int maxProfit(vector<int> &p) {int n=p.size();
    int m = INT_MIN;
    int a = INT_MIN;int j=0;
                                    int ar[n];
                                    for(int i=n-1;i>=0;i--){
                                        if(a<p[i]){
                                       
                                        a=p[i];}
                                         ar[i]=max(a,p[i]);
                                    }j=0;
  for(auto i:p){
      m=max(m,ar[j++]-i);
  }return m;
  }
};