class Solution {
public:
    string bestHand(vector<int>& r, vector<char>& s) {
        map<int,int>m;
        for(auto i:r)m[i]++;
        map<char,int>v;for(auto i:s)v[i]++;
        int x=0,y=0,z=0;;
        for(auto i:v)if(i.second==5)x++;
        for(auto i:m){if(i.second>=3)y++;if(i.second==2)z++;}
        if(x>0)
        {
            return "Flush";
        }
        else if(y>0){
            return "Three of a Kind";
        }
       else if(z>0){
            return "Pair";
        }
        else {
            return "High Card";
        }
    }
};