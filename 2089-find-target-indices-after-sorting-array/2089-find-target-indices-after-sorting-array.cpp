class Solution {
public:
    vector<int> targetIndices(vector<int>& s, int t) {
        sort(s.begin(),s.end());
        vector<int>v;
        for(int i=0;i<s.size();i++){
            if(s[i]==t){
                v.push_back(i);
                
            }
        }
        return v;
    }
};