class Solution {
public:
    double median(vector<int>& a, vector<int>& b, int s1, int e1, int s2, int e2, int tar){
        int la, lb, ma, mb, m = max(e1 - s1 + 1,0), n = max(e2 - s2 + 1,0), ans;
        if(!m)
            return b[s2 + tar];
        if(!n)
            return a[s1 + tar];
        
        la = m/2;
        lb = n/2;
        ma = a[s1 + la];
        mb = b[s2 + lb];
        
        if (la + lb >= tar){
            if (ma > mb)
                ans = median(a,b,s1,s1 + la - 1,s2,e2,tar);
            else
                ans = median(a,b,s1,e1,s2,s2 + lb - 1,tar);
        }
        else{
            if (ma > mb)
                ans = median(a,b,s1,e1,s2 + lb + 1,e2,tar - lb - 1);
            else
                ans = median(a,b,s1 + la + 1,e1,s2,e2,tar - la - 1);
        }
        return ans;
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();

        if (!m)
            return n & 1 ? nums2[n / 2] : (nums2[n / 2 - 1] + nums2[n / 2]) / 2.0;
        if (!n)
            return m & 1 ? nums1[m / 2] : (nums1[m / 2 - 1] + nums1[m / 2]) / 2.0;
        
        if ((m + n) & 1)
            return median(nums1,nums2,0,m-1,0,n-1,(m + n) / 2);
        
        return (median(nums1,nums2,0,m-1,0,n-1,(m + n) / 2 - 1) + median(nums1,nums2,0,m-1,0,n-1,(m + n) / 2))/2.0;
    }
};