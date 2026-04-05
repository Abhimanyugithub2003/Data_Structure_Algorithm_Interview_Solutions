1class Solution {
2public:
3int m;
4int n;
5int t[501][501];
6int solve(string &w1,string &w2,int i,int j){
7    if(i==0 || j==0){
8       return i+j;
9    }
10    if(t[i][j]!=-1) return t[i][j];
11    if(w1[i-1]==w2[j-1]){
12        return t[i][j]=solve(w1,w2,i-1,j-1);
13    }
14    int insert=1+solve(w1,w2,i,j-1);
15    int del=1+solve(w1,w2,i-1,j);
16    int replace=1+solve(w1,w2,i-1,j-1);
17    return t[i][j]=min({insert,del,replace});
18}
19    int minDistance(string w1, string w2) {
20        m=w1.length();
21        n=w2.length();
22        memset(t,-1,sizeof(t));
23        return solve(w1,w2,m,n);
24    }
25};