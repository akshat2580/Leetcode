class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long d=(num)/3;
        if(d*3==num){
            return {d-1,d,d+1};
        }
        else
            return {};
    }
};