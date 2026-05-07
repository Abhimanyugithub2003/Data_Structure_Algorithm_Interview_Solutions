1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4       int maxi=nums[0];
5       int mini=nums[0];
6       int ans=nums[0];
7       for(int i=1;i<nums.size();i++){
8        if(nums[i]<0){
9            swap(maxi,mini);
10        }
11        maxi=max(nums[i],maxi*nums[i]);
12        mini=min(nums[i],mini*nums[i]);
13        ans=max(ans,maxi);
14       } 
15       return ans;
16    }
17};