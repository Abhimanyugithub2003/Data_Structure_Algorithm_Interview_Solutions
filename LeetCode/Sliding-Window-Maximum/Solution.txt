1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        int n=nums.size();
5        int i=0,j=0;
6        priority_queue<pair<int,int>> pq;
7        vector<int> ans;
8        while(j<n){
9            pq.push({nums[j],j});
10            if(j-i+1<k){
11                j++;
12            }else{
13                while(!pq.empty() && pq.top().second<i){
14                    pq.pop();
15                }
16                ans.push_back(pq.top().first);
17                i++;
18                j++;
19            }
20        }
21        return ans;
22    }
23};