class Solution {
public:
    int findKthLargest(vector<int>& s, int k) {
        int n=s.size(),c=0;
        map<int,int>m;
        for(auto i:s)m[i]++;
        k=n-k+1;
        for(auto i:m)
        {
           
            if(k>0)
            {c=i.first;
            }else
                break;
             k-=i.second;
        }
        return c; 
    }
};