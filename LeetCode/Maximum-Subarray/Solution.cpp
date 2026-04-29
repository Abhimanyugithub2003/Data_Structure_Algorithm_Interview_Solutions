1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int curr_sum=nums[0];
5        int max_sub_sum=nums[0];
6        for(int i=1;i<nums.size();i++){
7            curr_sum=max(nums[i],curr_sum+nums[i]);
8            max_sub_sum=max(max_sub_sum,curr_sum);
9        }
10        return max_sub_sum;
11    }
12};