1class Solution {
2public:
3    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
4        int m=grid.size();
5        int n=grid[0].size();
6        vector<vector<int>> result(m-k+1,vector<int> (n-k+1));
7        for(int i=0;i<=m-k;i++){
8            for(int j=0;j<=n-k;j++){
9                set<int> val;
10                for(int r=i;r<=i+k-1;r++){
11                    for(int c=j;c<=j+k-1;c++){
12                        val.insert(grid[r][c]);
13                    }
14                }
15                if(val.size()==1) {
16                    result[i][j]=0;
17                    continue;
18                }
19                int minabsdiff=INT_MAX;
20                auto prev=val.begin();
21                auto curr=next(prev);
22                while(curr!=val.end()){
23                    minabsdiff=min(minabsdiff, *curr-*prev);
24                    prev=curr;
25                    curr++;
26                }
27                result[i][j]=minabsdiff;
28            }
29        }
30        return result;
31    }
32};