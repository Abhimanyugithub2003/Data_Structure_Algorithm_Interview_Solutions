1class Solution {
2public:
3typedef long long ll;
4long long t[1000001][2];
5ll solve(vector<int> &nums,int n,int idx,bool flag){
6    if(idx>=n) return 0;
7    if(t[idx][flag]!=-1) return t[idx][flag];
8    ll skip=solve(nums,n,idx+1,flag);
9    ll val=nums[idx];
10    if(flag==false){
11        val=-val;
12    }
13    ll take=val+solve(nums,n,idx+1,!flag);
14    return t[idx][flag]=max(skip,take);
15}
16    long long maxAlternatingSum(vector<int>& nums) {
17        int n=nums.size();
18        memset(t,-1,sizeof(t));
19        return solve(nums,n,0,true);
20    }
21};