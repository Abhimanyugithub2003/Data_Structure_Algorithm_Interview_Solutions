1class Solution {
2public:
3    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
4        int n=nums.size();
5        int mx=-1,mn=-1;
6        long long ans=0;
7        int last_valid_idx=-1;
8        for(int i=0;i<n;i++){
9            if((nums[i]<minK || nums[i]>maxK)){
10                last_valid_idx=i;
11            }
12            if(nums[i]==minK){
13                mn=i;
14            }
15            if(nums[i]==maxK){
16                mx=i;
17            }
18            ans += max(0, min(mn, mx) - last_valid_idx);
19        }
20        return ans;
21    }
22};