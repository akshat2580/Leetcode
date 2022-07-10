class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==0)return {0};
        vector<int>v(n,0);
        int j=0;
        if(n%2){       
            for(int i=0;i<n/2;i++)
         v[i]=++j;
                for(int i=n/2+1;i<n;i++)
                    v[i]=-(j--);
       
        }
        else{
            for(int i=0;i<n/2;i++)
v[i]=++j;
            for(int i=n/2;i<n;i++)v[i]=-(j--);
            
        }
        return v;
    }
};