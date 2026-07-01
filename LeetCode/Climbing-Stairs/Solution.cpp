1class Solution {
2public:
3int stair(int n,vector<int> &dp){
4    if(n<=1) return 1;
5    if(dp[n]!=-1) return dp[n];
6    return dp[n]=stair(n-1,dp)+stair(n-2,dp);
7}
8    int climbStairs(int n) {
9        // vector<int> dp(n+1,-1);
10        // dp[0]=1;
11        // dp[1]=1;
12        if(n<=1) return 1;
13        
14        int curr=0,prev=1,prev1=1;
15        for(int i=2;i<=n;i++){
16            curr=prev+prev1;
17            prev1=prev;
18            prev=curr;
19        }
20        // dp[i]=dp[i-1]+dp[i-2];
21        return curr;
22    }
23};