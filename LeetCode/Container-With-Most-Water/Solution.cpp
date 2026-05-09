1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n=height.size();
5        int lp=0,rp=n-1;
6        int Mwater=0;
7        while(lp<rp){
8            int w=rp-lp;
9            int ht=min(height[lp],height[rp]);
10            int currWt=w*ht;
11            Mwater=max(Mwater,currWt);
12            (height[lp]<height[rp]) ? lp++ : rp--;
13        }
14        return Mwater;
15    }
16};