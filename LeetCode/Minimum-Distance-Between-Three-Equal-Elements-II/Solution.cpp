1class Solution {
2public:
3    int minimumDistance(vector<int>& nums) {
4        int n=nums.size();
5        unordered_map<int,vector<int>> mp;
6        int result=INT_MAX;
7        for(int i=0;i<n;i++){
8            mp[nums[i]].push_back(i);
9            if(mp[nums[i]].size()>=3){
10                vector<int> &vec=mp[nums[i]];
11                int size=vec.size();
12                int k=vec[size-3];
13                result=min(result,2*(i-k));
14            }
15        }
16        return result==INT_MAX ? -1 : result;
17    }
18};