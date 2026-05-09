1class Solution {
2public:
3    int kthSmallest(vector<vector<int>>& matrix, int k) {
4        priority_queue<int> pq;
5        int n=matrix.size();
6        int m=matrix[0].size();
7        for(int i=0;i<n;i++){
8            for(int j=0;j<m;j++){
9                pq.push(matrix[i][j]);
10                if(pq.size()>k){
11                    pq.pop();
12                }
13            }
14        }
15            return pq.top();
16
17    }
18};