class Solution {
public:
    int minPartitions(string n) {int c=0;
      for(auto i:n)c=max(c,i-'0');return c;
    }
};