1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        bool flag=false;
5        sort(nums.begin(),nums.end());
6        for(int i=0;i<nums.size()-1;i++){
7            if(nums[i]==nums[i+1]){
8                return true;
9                break;
10            }
11        }
12        return false;
13    }
14};