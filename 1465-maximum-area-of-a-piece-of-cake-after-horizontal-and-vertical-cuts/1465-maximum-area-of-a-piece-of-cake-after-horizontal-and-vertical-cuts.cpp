class Solution {
public:
    int maxArea(int h, int w, vector<int>& a, vector<int>& v) {
        long long area=0;a.push_back(0);v.push_back(0);a.push_back(h);v.push_back(w);
        sort(a.begin(),a.end());sort(v.begin(),v.end());
       for(int i=0;i<a.size()-1;i++)
           area=max(area,(long long)(a[i+1]-a[i]));
        long long p=0;
        for(int i=0;i<v.size()-1;i++)
            p=max(p,(long long)(v[i+1]-v[i]));
        area*=p;
        int ans=area%(long)(1e9+7);
        return ans;
    }
};