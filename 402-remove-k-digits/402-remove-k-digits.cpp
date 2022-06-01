class Solution {
public:
        string removeKdigits(string nums, int k) {
       stack<char>st;
            
            for(auto i:nums){
                while(k&&!st.empty()&&i<st.top()){
                    k--;
                    st.pop();
                }
                if(st.size()||i!='0')st.push(i);
            }
            while(k&&st.size())
            {
                k--;
                st.pop();
            }
            string a="";
            while(st.size()){
                a+=st.top();
                st.pop();
            }
            if(!a.size())return "0";
            reverse(a.begin(),a.end());
            return a;
    }
};