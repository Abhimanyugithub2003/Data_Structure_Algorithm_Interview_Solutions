1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        priority_queue<int,vector<int>, greater<int>>q;
5        for(int i=0;i<k;i++)
6        q.push(nums[i]);
7        while(k<nums.size()){
8            if(q.top()<nums[k]){
9                q.pop();
10                q.push(nums[k]);
11            }
12            k++;
13        }
14        return q.top();
15    }
16};