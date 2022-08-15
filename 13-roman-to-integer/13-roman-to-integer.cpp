class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();int l=0;
     if(n==1)
     {  switch (s[0])
          {
              case 'M':
              l=l+1000;
              break;
              case 'D':
              l=l+500;
              break;
              case 'C':
              {
               l=l+100;break;} 
              case 'L':
l=l+50;
              break;
              
              case 'V':
              l=l+5;
              break;
              case 'X':
              {
                 
              l=l+10;
              break;}
                   case 'I':
              {
                  l=l+1;
              break;
              }}}
                      else{        
                              for(int i=0;i<n;i++){
          char ch=s[i];
          
          switch (ch)
          {
              case 'M':
              l=l+1000;
              break;
              case 'D':
              l=l+500;
              break;
              case 'C':
              {if(s[i+1]=='M'||s[i+1]=='D')
              l=l-100;
              else
               l=l+100;break;} 
              case 'L':
l=l+50;
              break;
              
              case 'V':
              l=l+5;
              break;
              case 'X':
              {
                      
                  if(s[i+1]=='C'||s[i+1]=='L')
              l=l-10;
               else
              l=l+10;
              break;}
                   case 'I':
              {if(s[i+1]=='V'||s[i+1]=='X')
                  l=l-1;
              else
                  l=l+1;
              break;
              }
          }}
            
    }        return l;}

};