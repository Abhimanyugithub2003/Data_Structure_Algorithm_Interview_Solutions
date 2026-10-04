1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int maxr = 0 ;
5        for(int i=0;i<nums.size();i++){
6            if(i > maxr) return false;
7            maxr = max(maxr, i + nums[i]);
8        }
9        return true;
10    }
11};