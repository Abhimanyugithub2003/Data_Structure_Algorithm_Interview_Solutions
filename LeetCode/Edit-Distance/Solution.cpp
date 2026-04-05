1class Solution {
2public:
3int m;
4int n;
5int t[501][501];
6int solve(string &w1,string &w2,int i,int j){
7    if(i==0){
8        return j;
9    }else if(j==0){
10        return i;
11    }
12    if(t[i][j]!=-1) return t[i][j];
13    if(w1[i-1]==w2[j-1]){
14        return t[i][j]=solve(w1,w2,i-1,j-1);
15    }
16    int insert=1+solve(w1,w2,i,j-1);
17    int del=1+solve(w1,w2,i-1,j);
18    int replace=1+solve(w1,w2,i-1,j-1);
19    return t[i][j]=min({insert,del,replace});
20}
21    int minDistance(string w1, string w2) {
22        m=w1.length();
23        n=w2.length();
24        memset(t,-1,sizeof(t));
25        return solve(w1,w2,m,n);
26    }
27};