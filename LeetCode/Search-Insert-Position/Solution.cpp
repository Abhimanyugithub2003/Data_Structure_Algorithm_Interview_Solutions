1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int n=nums.size();
5        int low=0;
6        int high=n-1;
7        int ans;
8        while(low<=high){
9            int mid=low+(high-low)/2;
10            if(nums[mid]>=target){
11                ans=mid;
12                high=mid-1;
13            }else{
14                low=mid+1;
15            }
16        }
17        return ans;
18    }
19};