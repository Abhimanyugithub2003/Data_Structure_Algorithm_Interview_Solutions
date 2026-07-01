1class Solution {
2public:
3void RunSum(vector<int> &nums,int i,int n){
4    if(i>=n) return;
5    nums[i]+=nums[i-1];
6    RunSum(nums,i+1,n);
7}
8    vector<int> runningSum(vector<int>& nums) {
9        int n=nums.size();
10        RunSum(nums,1,n);
11        return nums;
12    }
13};