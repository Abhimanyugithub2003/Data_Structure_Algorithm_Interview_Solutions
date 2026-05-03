1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        int count0=0;
6        int totalproduct=1;
7        int idx=0;
8        for(int i=0;i<n;i++){
9            if(nums[i]==0){
10                count0++;
11                idx=i;
12                continue;
13            }
14            totalproduct*=nums[i];
15        }
16        vector<int> ans(n,0);
17        if(count0==1){
18            ans[idx]=totalproduct;
19            return ans;
20        }else if(count0>1){
21            return ans;
22        }
23        for(int i=0;i<n;i++){
24            ans[i]=totalproduct/nums[i];
25        }
26        return ans;
27    }
28};