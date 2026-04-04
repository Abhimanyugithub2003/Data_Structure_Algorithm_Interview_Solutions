1class Solution {
2public:
3int t[1001][1001];
4int solve(string &text1, string &text2,int idx,int jdx){
5    if(idx>=text1.length() || jdx>=text2.length()) return 0;
6    if(t[idx][jdx]!=-1) return t[idx][jdx];
7    if(text1[idx]==text2[jdx]) return t[idx][jdx]=1+solve(text1,text2,idx+1,jdx+1);
8    int iftext1=solve(text1,text2,idx,jdx+1);
9    int iftext2=solve(text1,text2,idx+1,jdx);
10    return t[idx][jdx]=max(iftext1,iftext2);
11}
12    int longestCommonSubsequence(string text1, string text2) {
13        memset(t,-1,sizeof(t));
14        return solve(text1,text2,0,0);
15    }
16};