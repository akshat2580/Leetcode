class Solution {
public:
    vector<int> constructRectangle(int a) {
        int l=0,r=0,d=INT_MAX;
        for(int i=1;i<=a;i++)
            if(d>(i-a/i)&&i>=a/i&& i*(a/i)==a){
               l=i;r=a/i;d=(i-a/i);
            }
            return {l,r};
    }
};