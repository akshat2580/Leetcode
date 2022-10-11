class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        vector<int>v;
        set<int>s(a.begin(),a.end());
        map<int,int>m;
        int l=1;
     for(auto i:s){
         if(m.find(i)==m.end())
         m[i]=l++;
     }  
        for(int i=0;i<a.size();i++){
            v.push_back(m[a[i]]);   
        }
        return v;
    }
};
