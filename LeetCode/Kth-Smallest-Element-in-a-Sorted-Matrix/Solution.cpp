1class Solution {
2public:
3    int kthSmallest(vector<vector<int>>& matrix, int k) {
4        vector<int> ans;
5        for(int i=0;i<matrix.size();i++){
6            for(int j=0;j<matrix[i].size();j++){
7                ans.push_back(matrix[i][j]);
8            }
9        }
10        priority_queue<int> q;
11        for(int i=0;i<k;i++)
12        q.push(ans[i]);
13        for(int i=k;i<ans.size();i++){
14            if(q.top()>ans[i]){
15                q.pop();
16                q.push(ans[i]);
17            }
18        }
19        return q.top();
20    }
21};