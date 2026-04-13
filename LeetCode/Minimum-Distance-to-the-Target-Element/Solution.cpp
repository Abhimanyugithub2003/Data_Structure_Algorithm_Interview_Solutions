1class Solution {
2public:
3    int getMinDistance(vector<int>& nums, int target, int start) {
4        int idx=0;
5        int ans=INT_MAX;
6        for(int i=0;i<nums.size();i++){
7            if(target==nums[i]){
8                idx=i;
9                ans=min(ans,abs(idx-start));
10            }
11        }
12        return ans;
13    }
14};