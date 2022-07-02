class Solution {
public:
    static bool cmp(vector<int>& v,vector<int>& z){
        return v[1]<z[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        sort(v.begin(),v.end(),cmp);
        int mx=v[0][1],ans=0;
        for(int i=1 ; i<v.size() ; i++){
            if(v[i][0]<mx)ans++;
            else mx=v[i][1];
        }
        return ans;
    }
};