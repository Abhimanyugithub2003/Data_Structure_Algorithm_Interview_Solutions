1class Solution {
2public:
3int gcd(int a,int b){
4    while(a>0 && b>0){
5        if(a>b){
6            a=a%b;
7        }else{
8            b=b%a;
9        }
10    }
11    if(a==0) return b;
12    return a;
13}
14    int findGCD(vector<int>& nums) {
15        int mn=INT_MAX;
16        int mx=INT_MIN;
17        for(int i=0;i<nums.size();i++){
18            mn=min(mn,nums[i]);
19            mx=max(mx,nums[i]);
20        }
21        return gcd(mn,mx);
22    }
23};