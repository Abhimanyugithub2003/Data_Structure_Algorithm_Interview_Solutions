1class Solution {
2public:
3    int mirrorDistance(int n) {
4        int r=0;
5        int ans=n;
6        while(ans!=0){
7            int x=ans%10;
8            r*=10;
9            r+=x;
10            ans/=10;
11        }
12        return abs(r-n);
13    }
14};