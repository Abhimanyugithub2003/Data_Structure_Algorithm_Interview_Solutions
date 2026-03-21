1class Solution {
2public:
3int N,M,K;
4int MOD = 1e9+7;
5int t[51][51][101];
6int solve(int idx,int src_cost,int maxsofar){
7    if(idx>=N){
8        if(src_cost==K){
9            return 1;
10        }else{
11            return 0;
12        }
13    }
14    if( t[idx][src_cost][maxsofar]!=-1) return t[idx][src_cost][maxsofar];
15    int result=0;
16    for(int i=1;i<=M;i++){
17        if(i>maxsofar){
18            result=(result+solve(idx+1,src_cost+1,i))%MOD;
19        }else{
20            result=(result+solve(idx+1,src_cost,maxsofar))%MOD;
21        }
22    }
23    if(maxsofar!=-1){
24        t[idx][src_cost][maxsofar]=result%MOD;
25    }
26    return result%MOD;
27}
28    int numOfArrays(int n, int m, int k) {
29        N=n,K=k,M=m;
30        memset(t,-1,sizeof(t));
31        return solve(0,0,0);
32    }
33};