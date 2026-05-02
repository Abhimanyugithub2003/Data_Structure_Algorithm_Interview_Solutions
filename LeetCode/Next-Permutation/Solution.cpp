1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        int n=nums.size();
5        int gola_idx=-1;
6        for(int i=n-1;i>0;i--){
7            if(nums[i-1]<nums[i]){
8                gola_idx=i-1;
9                break;
10            }
11        }
12        if(gola_idx!=-1){
13            int swap_idx=gola_idx;
14            for(int j=n-1;j>=gola_idx+1;j--){
15                if(nums[j]>nums[gola_idx]){
16                    swap_idx=j;
17                    break;
18                }
19            }
20            swap(nums[gola_idx],nums[swap_idx]);
21        }
22        reverse(nums.begin()+gola_idx+1, nums.end());
23    }
24};