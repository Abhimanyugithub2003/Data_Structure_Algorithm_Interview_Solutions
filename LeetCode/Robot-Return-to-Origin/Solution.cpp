1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int n=moves.length();
5        int x=0,y=0;
6        for(int i=0;i<n;i++){
7            char dir=moves[i];
8            if(dir=='U') x++;
9            else if(dir=='D') x--;
10            else if(dir=='R') y++;
11            else y--;
12        }
13        return (x==0 && y==0) ? true : false;
14    }
15};