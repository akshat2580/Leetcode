class Solution {
public:
    int sol(int n){
        int s=0;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,multiset<int,greater<int>>>m;
        for(auto i:nums)m[sol(i)].insert(i);
        int c=-1;
        for(auto i:m){for(auto j:i.second)cout<<j;
                      cout<<endl;
            if(i.second.size()>=2){
                int k=2,ans=0;
                for(auto j:i.second){
                    if(k==0)break;
                    ans+=j;
                    k--;
                }
                if(ans)c=max(ans,c);
            }
        }
        return c;
    }
};