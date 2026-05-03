1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        priority_queue<int>q;
5        for(int i=0;i<nums.size();i++)
6        q.push(nums[i]);
7        k--;
8        while(k--){
9            q.pop();
10        }
11        return q.top();
12    }
13};