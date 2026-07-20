1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans;
6        sort(nums.begin(), nums.end());
7        for(int i=1;i<n;i++){
8            int j=i-1;
9            if(nums[i]==nums[j]){
10                ans.push_back(nums[i]);
11            }
12        }
13        return ans;
14    }
15};