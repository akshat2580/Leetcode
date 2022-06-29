class Solution {
public:
    void solve(vector<string>&v,int open,int close,string st){
        if(open==0&&close==0)
        {v.push_back(st);
            return;
        }
        if(open!=0)
        {string s=st;
         s.push_back('(');
         solve(v,open-1,close,s);   
        }
        if(close>open)
        {string s=st;
         s.push_back(')');
            solve(v,open,close-1,s);
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=n,close=n;
        vector<string>v;
        string st="";
        solve(v,open,close,st);
        return v;
    }
};