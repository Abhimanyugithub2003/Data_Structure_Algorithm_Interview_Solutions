1class Solution {
2public:
3int m,n;
4int t[501][501][3];
5int solve(vector<vector<int>>& coins,int i,int j,int neu){
6    if(i==m-1 && j==n-1){
7        if(coins[i][j]<0 && neu>0) return 0;
8        return coins[i][j];
9    }
10    if(i>=m || j>=n) return INT_MIN;
11    if(t[i][j][neu]!=INT_MIN) return t[i][j][neu];
12    int take=coins[i][j]+max(solve(coins,i+1,j,neu),solve(coins,i,j+1,neu));
13    int skip=INT_MIN;
14    if(coins[i][j]<0 && neu>0){
15        int skipdown=solve(coins,i+1,j,neu-1);
16        int skipright=solve(coins,i,j+1,neu-1);
17        skip=max(skipdown,skipright);
18    }
19    return t[i][j][neu]=max(take,skip);
20}
21    int maximumAmount(vector<vector<int>>& coins) {
22         m=coins.size();
23         n=coins[0].size();
24         memset(t,-1,sizeof(t));
25         for(int i=0;i<m;i++){
26            for(int j=0;j<n;j++){
27                for(int k=0;k<3;k++){
28                    t[i][j][k]=INT_MIN;
29                }
30            }
31         }
32        return solve(coins,0,0,2);
33    }
34};