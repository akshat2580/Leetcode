class Solution {
public:
    int findTheDistanceValue(vector<int>& a1, vector<int>& a2, int d) {int c=0;
        for(int i=0;i<a1.size();i++){int a=0;
            for(auto j:a2){
                if(abs(a1[i]-j)<=d)a++;
            }
                                     if(a==0)c++;
        } 
                                                                       return c;
}
};