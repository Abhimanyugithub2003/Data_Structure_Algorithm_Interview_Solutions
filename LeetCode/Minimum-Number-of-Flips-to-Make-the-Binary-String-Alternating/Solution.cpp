1class Solution {
2public:
3    int minFlips(string s) {
4        int n=s.length();
5        s=(s+s);
6        string s1,s2;
7        for(int i=0;i<2*n;i++){
8            s1+=(i%2 ? '0' : '1');
9            s2+=(i%2 ? '1' : '0');
10        }
11        int result=INT_MAX;
12        int flip1=0;
13        int flip2=0;
14        int i=0;
15        int j=0;
16        while(j<2*n){
17            if(s[j]!=s1[j])
18            flip1++;
19            if(s[j]!=s2[j])
20            flip2++;
21            if(j-i+1>n){
22                if(s[i]!=s1[i]) flip1--;
23                if(s[i]!=s2[i]) flip2--;
24                i++;
25            }
26            if(j-i+1==n){
27                result=min({result,flip1,flip2});
28            }
29            j++;
30        }
31        return result;
32    }
33};