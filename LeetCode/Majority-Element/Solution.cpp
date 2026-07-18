1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        unordered_map<int,int> mp;
6        for(auto it : nums){
7            mp[it]++;
8        }
9        for(auto it : mp){
10            int freq=it.second;
11            if(freq > (n/2)){
12                return it.first;
13            }
14        }
15        return -1;
16    }
17};