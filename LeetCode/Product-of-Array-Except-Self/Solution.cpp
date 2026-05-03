1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> prefix(n);
6        prefix[0]=1;
7        for(int i=1;i<n;i++){
8            prefix[i]=prefix[i-1]*nums[i-1];
9        }
10        vector<int> sufix(n);
11        sufix[n-1]=1;
12        for(int i=n-2;i>=0;i--){
13            sufix[i]=sufix[i+1]*nums[i+1];
14        }
15        vector<int> ans(n);
16        for(int i=0;i<n;i++){
17            ans[i]=prefix[i]*sufix[i];
18        }
19        return ans;
20    }
21};