class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& s, int k) {
        int n=s.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
           if(m.find(s[i])!=m.end()){
                if( abs(i-m[s[i]])<=k){
                    return 1;
                }
           }
            m[s[i]]=i;
        }
        return 0;
    }
};