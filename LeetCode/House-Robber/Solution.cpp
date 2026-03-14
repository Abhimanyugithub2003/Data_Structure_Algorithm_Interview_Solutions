1class Solution {
2public:
3    int rob(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> t(101);
6        if(n==1) return nums[0];
7        t[0]=0;
8        t[1]=nums[0];
9        for(int i=2;i<=n;i++){
10            int skip=t[i-1];
11            int choose=nums[i-1]+t[i-2];
12            t[i]=max(skip,choose);
13        }
14        return t[n];
15    }
16};