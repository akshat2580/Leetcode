class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string>m;
        vector<string>v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        char ch='a';
        for(int i=0;i<26;i++)m[ch+i]=v[i];
        unordered_map<string,int>mp;
        for(auto i:words){string h="";
            for(auto j:i)h+=m[j];
                mp[h]++;}
        return mp.size();
    }
};