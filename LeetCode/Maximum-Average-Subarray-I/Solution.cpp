1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int n=nums.size();
5        if(k==1){
6            int mx=INT_MIN;
7            for(int i=0;i<n;i++){
8                mx=max(nums[i],mx);
9            }
10            return mx;
11        }
12        int currsum=0;
13        for(int i=0;i<k;i++){
14            currsum+=nums[i];
15        }
16        int sum=currsum;
17        int i=0,j=k;
18        while(j<n){
19            currsum=currsum-nums[i]+nums[j];
20            sum=max(sum,currsum);
21            i++;
22            j++;
23        }
24        return (double)sum/k;
25    }
26};