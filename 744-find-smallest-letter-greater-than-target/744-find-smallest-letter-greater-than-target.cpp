class Solution {
public:
    char nextGreatestLetter(vector<char>& s, char t) {
        int r=s.size()-1,l=0;char k='a';int c=123;
//         while(l<=r){int m=(r+l)/2;
//             if(s[m]>t){k=min(s[m],k);
//                        r=m-1;}
//             else l=m+1;
            
//         }
//         return min(k,s[0]);
        for(int i=0;i<=r;i++){
        if(s[i]>t){
            c=min((int)s[i],c);
        }
    }
        if(c==123)
            return s[0];
        return (char)c;
    }
};