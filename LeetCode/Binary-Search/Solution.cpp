1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low=0,high=nums.size()-1;
5        while(low<=high){
6            int mid=low+(high-low)/2;
7            if(nums[mid]<target){
8                low=mid+1;
9            }else if(nums[mid]>target){
10                high=mid-1;
11            }else{
12                return mid;
13            }
14        }
15        return -1;
16    }
17};