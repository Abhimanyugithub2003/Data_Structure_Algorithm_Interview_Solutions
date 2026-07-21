1class Solution {
2public:
3    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
4        int n=nums.size();
5        sort(nums.begin(), nums.end());
6        vector<long long> prefixsum(n+1,0);
7        for(int i=0;i<n;i++){
8            prefixsum[i+1] = prefixsum[i] + nums[i];
9        }
10        vector<long long> ans;
11        for(auto q : queries){
12            int idx = lower_bound(nums.begin(), nums.end(), q) - nums.begin();
13            long long left = 1LL * q * idx - prefixsum[idx];
14            long long right = (prefixsum[n] - prefixsum[idx]) - 1LL * q *(n - idx);
15            ans.push_back(left+right);
16        }
17        return ans;
18    }
19};