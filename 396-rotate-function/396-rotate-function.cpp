// class Solution {
// public:
//     int maxRotateFunction(vector<int>& v) {
//         long s=0;
//         int n=v.size()-1,l=n;
//         while(l+1){
//             long m=0,k=0;
//             for(int i=l+1;i<v.size();i++)
//                             m+=(k++)*(v[i]);

//             for(int i=0;i<=l;i++){
            
//                 m+=(k++)*(v[i]);
               
//             }
//             s=max(s,m);l--;n=v.size()-1;
//         }
//         return s;
//     }
// };
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n  = nums.size();
        int product = 0;
        int sum  = 0;
        for(int i=0;i<n;i++){
            sum +=nums[i];
            product += i*nums[i];
        }
        int result = product;
        for(int i=n-1;i>=0;i--){
            product = product+sum-(n*nums[i]);
            result =max(result,product);
        }
         return result; 
    }
};