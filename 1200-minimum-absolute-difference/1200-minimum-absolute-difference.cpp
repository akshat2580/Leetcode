class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>v;
        int n=arr.size();
        sort(arr.begin(),arr.end());
       
        int m=INT_MAX;
        for(int i=1;i<n;i++)
        m=min(m,abs(arr[i]-arr[i-1]));
        for(int i=0;i<n-1;i++){
            if(-arr[i]+arr[i+1]==m)
                v.push_back({arr[i],arr[i+1]});
        }
        return v;
    }
};