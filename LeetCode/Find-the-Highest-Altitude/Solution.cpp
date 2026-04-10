1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int n=gain.size();
5        vector<int> alt(n+1);
6        alt[0]=0;
7        for(int i=1;i<=n;i++){
8            alt[i]=alt[i-1]+gain[i-1];
9        }
10        int mx=INT_MIN;
11        for(int i=0;i<=n;i++){
12            mx=max(alt[i],mx);
13        }
14        return mx;
15    }
16};