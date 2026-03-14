1class Solution {
2public:
3    long long maxAlternatingSum(vector<int>& nums) {
4        int n=nums.size();
5        long long t[n+1][2];
6        memset(t,0,sizeof(t));
7        for(int i=1;i<=n;i++){
8            t[i][0]=max(t[i-1][1]-nums[i-1],t[i-1][0]);
9            t[i][1]=max(t[i-1][0]+nums[i-1],t[i-1][1]);
10        }
11        return max(t[n][0],t[n][1]);
12    }
13};