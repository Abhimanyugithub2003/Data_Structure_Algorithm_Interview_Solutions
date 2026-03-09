1class Solution {
2public:
3int M=1e9+7;
4int t[201][201][2];
5int solve(int oneleft,int zeroleft,int lastwasone,int limit){
6    if(oneleft==0 && zeroleft==0) return 1;
7    if(t[oneleft][zeroleft][lastwasone]!=-1) return t[oneleft][zeroleft][lastwasone];
8    int result=0;
9    if(lastwasone==true){
10        for(int len=1;len<=min(zeroleft,limit);len++){
11            result=(result+solve(oneleft,zeroleft-len,false,limit))%M;
12        }
13    }else{
14        for(int len=1;len<=min(oneleft,limit);len++){
15            result=(result+solve(oneleft-len,zeroleft,true,limit))%M;
16        }
17    }
18    return t[oneleft][zeroleft][lastwasone]=result;
19}
20    int numberOfStableArrays(int zero, int one, int limit) {
21        memset(t,-1,sizeof(t));
22        int startwithone=solve(one,zero,false,limit);
23        int startwithzero=solve(one,zero,true,limit);
24        return (startwithone + startwithzero) % M;
25    }
26};