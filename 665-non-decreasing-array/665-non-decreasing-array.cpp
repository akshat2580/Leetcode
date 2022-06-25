class Solution {
public:
    bool checkPossibility(vector<int>& v) {
        int c=0;
        for (int i = 1; i < v.size(); i++)
            if (v[i] < v[i-1])
                if (c++||(i > 1&&i < v.size()-1&&v[i-2]>v[i]&&v[i+1]<v[i-1]))
                    return false;
        return true;
    }
};