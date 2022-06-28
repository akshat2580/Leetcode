class Solution {
public:
    int minDeletions(string s) {
    int c[26] = {}, r = 0;
    unordered_set<int> a;
    for (char i : s)c[i-'a']++;
    for (int i = 0; i < 26; i++)
        while(c[i] > 0 && !a.insert(c[i]).second)//here, second will give the bool value of the insert function, insert function has actually has 2 value stored if a elemnt is stored in bool it is written as true; hence if the is another a value comes then bool will get true,meaning that it already has a value.
            
        {r++;; c[i]--;}
    return r;
}
};