1class Solution {
2public:
3    int subarraysDivByK(vector<int>& nums, int k) {
4        int sum=0,rem=0;
5        unordered_map<int,int> mp;
6        mp[0]=1;
7        int result=0;
8        for(auto &it:nums){
9            sum+=it;
10            rem=sum%k;
11            if(rem<0) rem+=k;
12            if(mp.find(rem)!=mp.end()){
13                result+=mp[rem];
14                mp[rem]++;
15            }
16            else mp[rem]=1;
17        }
18        return result;
19    }
20};