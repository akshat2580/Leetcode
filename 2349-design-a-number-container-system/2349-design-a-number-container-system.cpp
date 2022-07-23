class NumberContainers {
public:
    unordered_map<int,int>mp;
    unordered_map<int,set<int>>m;
    NumberContainers() {
        int g=0;
    }
    
    void change(int i, int n) {
        if(mp[i]){
            m[mp[i]].erase(i);
            if(m[mp[i]].size()==0)m.erase(mp[i]);
        }
        mp[i]=n; 
        m[n].insert(i);
    }
    
    int find(int n) {
         if(m.find(n)!=m.end())return *m[n].begin();
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */