class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto i:a)
        {pq.push({abs(i-x),i});
         }
        
        vector<int>v;
     while(pq.size()&&k){
    
             v.push_back(pq.top().second);
         pq.pop();
         k--;
     }
        sort(v.begin(),v.end());
        return v;
    }
};