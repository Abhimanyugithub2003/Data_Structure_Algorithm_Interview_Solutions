1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        int n=nums.size();
5        vector<vector<int>> ans;
6        sort(nums.begin(),nums.end());
7        for(int i=0;i<n;i++){
8            if(i>0 && nums[i]==nums[i-1]) continue;
9            int j=i+1,k=n-1;
10            while(j<k){
11                int sum=nums[i]+nums[j]+nums[k];
12                if(sum<0){
13                    j++;
14                }
15                else if(sum>0){
16                    k--;
17                }
18                else{
19                    ans.push_back({nums[i],nums[j],nums[k]});
20                    j++;
21                    k--;
22                    while(j<k && nums[j]==nums[j-1])
23                    j++;
24                    
25                }
26            }
27        }
28        return ans;
29    }
30};