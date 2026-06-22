1class Solution {
2public:
3    int strStr(string str1, string str2) {
4        int n=str1.length();
5        int m=str2.length();
6        int i=0,j=0;
7        while(i<n && j<m){
8            if(str1[i]!=str2[j]){
9                i++;
10            }else{
11                int start_pos=i;
12                while(i<n &&  j<m && str1[i]==str2[j]){
13                    i++;
14                    j++;
15                }
16                if(j==m){
17                    return start_pos;
18                }
19                i = start_pos+1;
20                j=0;
21            }
22            
23        }
24        return -1;
25    }
26};