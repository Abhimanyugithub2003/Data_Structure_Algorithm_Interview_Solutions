1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int n=nums.size();
5        int prefix=1;
6        int sufix=1;
7        int ans=INT_MIN;
8        for(int i=0;i<n;i++){
9            if(prefix==0) prefix=1;
10            if(sufix==0) sufix=1;
11            prefix*=nums[i];
12            sufix*=nums[n-i-1];
13            ans=max(ans,max(prefix,sufix));
14        }
15        return ans;
16    }
17};