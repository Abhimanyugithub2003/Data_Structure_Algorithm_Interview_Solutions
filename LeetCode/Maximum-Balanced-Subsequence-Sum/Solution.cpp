1class Solution {
2public:
3    long long maxBalancedSubsequenceSum(vector<int>& nums) {
4        int n=nums.size();
5        map<int ,long long> mp;
6        long long result=INT_MIN;
7        for(int i=0;i<n;i++){
8            auto it=mp.upper_bound(nums[i]-i);
9            long long sum=nums[i];
10            if(it!=mp.begin()){
11                it--;
12                sum+=it->second;
13            }
14            mp[nums[i]-i]=max(mp[nums[i]-i],sum);
15            it = mp.upper_bound(nums[i]-i);
16            while(it!=mp.end() && it->second<=sum){
17                mp.erase(it++);
18            }
19            result=max(result,sum);
20        }
21        return result;
22
23    }
24};