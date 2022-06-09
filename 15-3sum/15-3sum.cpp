class Solution {
public:   
    vector<vector<int>> threeSum(vector<int>& s) {
        if(s.size()<3)return {};
        vector<vector<int>>v;
        sort(s.begin(),s.end());
        unordered_map<int,int>m;
        for(auto i:s)m[i]++;
        for(int i=0 ; i<s.size() ; i++){
            if(i && s[i]==s[i-1])continue;
            int target=-s[i];
            int j=i+1,k=s.size()-1;
            while(j<k){
                if(s[j]+s[k]>target)k--;
                else if(s[j]+s[k]<target)j++;
                else{
                    v.push_back({s[i],s[j],s[k]});
                    while(j<k && s[j]==s[j+1])j++;
                    j++;
                }
            }
            // int a=m[target];
            // m[target]--;
            // for(int j=i+1 ; j<s.size() ; j++){
            //     if(m[target-s[j]]);
            // }
        }
        return v;
    }
};