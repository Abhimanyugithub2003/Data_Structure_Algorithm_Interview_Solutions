1class Solution {
2public:
3vector<int> dp;
4int solve(int n){
5    if(n==1 || n==2) return n;
6    if(dp[n]!=-1) return dp[n];
7        return dp[n]=solve(n-1)+solve(n-2);
8}
9    int climbStairs(int n) {
10        dp.resize(n+1,-1);
11        return solve(n);
12    }
13};