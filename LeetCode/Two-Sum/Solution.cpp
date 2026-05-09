1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        vector<pair<int,int>> ans;
5        vector<int> result;
6        int n=nums.size();
7        for(int i=0;i<n;i++){
8            ans.push_back({nums[i],i});
9        }
10        sort(ans.begin(),ans.end());
11        int i=0,j=n-1;
12        while(i<j){
13            int sum=ans[i].first+ans[j].first;
14            if(sum>target) j--;
15            else if(sum<target) i++;
16            else{
17                result.push_back(ans[i].second);
18                result.push_back(ans[j].second);
19                break;
20            }
21        }
22        return result;
23    }
24};