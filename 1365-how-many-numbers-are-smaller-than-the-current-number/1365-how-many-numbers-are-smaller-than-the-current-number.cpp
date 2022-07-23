class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& s) {
        vector<int>v;
        set<int>m;
        for(auto i:s)m.insert(i);
        for(int i=0;i<s.size();i++){int c=0;
            for(int j=0;j<s.size();j++){
                if(i!=j && s[i]>s[j])c++;
            }
             v.push_back(c);
        }
           
        return v;
    }
};