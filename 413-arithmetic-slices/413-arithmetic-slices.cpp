class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& n) {
        int p=n.size();int s=0;int k=1;int t=0;
        if(p<3)return 0;
      
        
        
         int a[p-1];
            for(int i=0;i<p-1;i++)
                a[i]=n[i]-n[i+1];
            long long count =1,sum=0;
        for(int j=1;j<p-1;j++){
            if(a[j]==a[j-1]) count++;
            else {
                sum+=(count*(count-1)/2);
                count=1;
            }
        }
               sum+=(count*(count-1)/2);
      
              
        
             return sum; 
    }
};