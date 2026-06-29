1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int l=0,h=nums.size()-1;
5        
6        while(l<=h){
7            int mid=l+(h-l)/2;
8            if(l==h) {
9                if(nums[l]>target) return l;
10                else if(nums[l]<target) return l+1;
11                return l;
12            }
13            if(nums[mid]>target){
14                h=mid;
15            }else if(nums[mid]<target){
16                l=mid+1;
17            }else{
18                return mid;
19            }
20        }
21        return -1;
22    }
23};