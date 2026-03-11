1class Solution {
2public:
3    int bitwiseComplement(int n) {
4        if(n==0 || n==1) return !n;
5        int counter=0;
6        int result=0;
7        while(n){
8            int r=n%2;
9            result+=pow(2,counter)* (!r);
10            counter++;
11            n/=2;
12        }
13        return result;
14    }
15};