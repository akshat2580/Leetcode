class Solution {
public:
    int candy(vector<int>& s) {
      int n=s.size();
	 if(n<=1)
		 return n;
	 vector<int> num(n,1);
	 for (int i = 1; i < n; i++)
	 {
		 if(s[i]>s[i-1])
			 num[i]=num[i-1]+1;
	 }
	 for (int i=n-1; i>0 ; i--)
	 {
		 if(s[i-1]>s[i])
			 num[i-1]=max(num[i]+1,num[i-1]);
	 }
	 int c=0;
	 for (int i = 0; i<n; i++)
	 {
		 c+=num[i];
	
	 }
	 return c;}
};