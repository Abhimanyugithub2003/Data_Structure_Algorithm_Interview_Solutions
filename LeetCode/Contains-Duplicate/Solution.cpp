1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        for(auto &it:nums){
6            mp[it]++;
7        }
8        for(auto &it:nums){
9            if(mp[it]>1) return true;
10        }
11        return false;
12    }
13};