class Solution {
public:
     vector<int> findClosestElements(vector<int>& a, int k, int x) {
       vector<int>v;
         priority_queue<pair<int,int>>p;
         for(auto i:a)
         {p.push({abs(i-x),i});
             if(p.size()>k)
                 p.pop();
         }
         while(p.size()){
            v.push_back(p.top().second);
             p.pop();
         }
         sort(v.begin(),v.end());
         return v;
    }
};