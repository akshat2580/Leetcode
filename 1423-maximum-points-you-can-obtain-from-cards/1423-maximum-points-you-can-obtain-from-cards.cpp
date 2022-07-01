class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int w=k-1,j=v.size()-1;
        
        int mx=0;
      int sum=0;
       //  for(auto i:v)sum+=i;
        for(int i=0;i<k;i++)sum+=v[i];
        mx=sum;
            while(w>=0){
                sum=sum+v[j]-v[w];
                mx=max(sum,mx);
                j--;
                w--;
            }
        return mx;
    }
};