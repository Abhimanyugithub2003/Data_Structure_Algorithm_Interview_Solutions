1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        int n=nums.size();
5        priority_queue<int,vector<int>,greater<int>> pq;
6        for(int i=0;i<k;i++){
7            pq.push(nums[i]);
8        }
9        for(int i=k;i<n;i++){
10            if(pq.top()<nums[i]){
11                pq.pop();
12                pq.push(nums[i]);
13            }
14        }
15        return pq.top();
16    }
17};