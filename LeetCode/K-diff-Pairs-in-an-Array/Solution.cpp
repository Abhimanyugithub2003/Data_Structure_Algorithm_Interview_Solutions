1class Solution {
2public:
3    int findPairs(vector<int>& nums, int k) {
4        int n=nums.size();
5        
6        set<pair<int,int>> st;
7        for(int i=0;i<n;i++){
8            for(int j=i+1;j<n;j++){
9                if(abs(nums[i]-nums[j])==k){
10                    
11                    st.insert({min(nums[i],nums[j]), max(nums[i],nums[j])});
12                }
13            }
14        }
15        return st.size();
16
17    }
18};