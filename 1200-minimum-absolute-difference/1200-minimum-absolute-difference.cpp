class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>v;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<int,int>q;
        for(auto i:arr)q[i]++;
        int m=INT_MAX;
        for(int i=1;i<n;i++)
        m=min(m,abs(arr[i]-arr[i-1]));
        for(int i=0;i<n;i++){
            if(q[arr[i]-m])
                v.push_back({min(arr[i],arr[i]-m),max(arr[i],arr[i]-m)});
        }
        return v;
    }
};