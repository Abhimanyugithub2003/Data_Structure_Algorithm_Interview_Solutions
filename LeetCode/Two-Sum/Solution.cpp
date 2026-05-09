1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n=nums.size();
5        unordered_map<int,int> mp;
6        for(int i=0;i<n;i++){
7            int first=nums[i];
8            int second=target-first;
9            if(mp.find(second)!=mp.end()){
10                return {i,mp[second]};
11            }
12            mp[first]=i;
13        }
14        return {-1,-1};
15    }
16};