1class Solution {
2public:
3    int m, n;
4
5    int solve(vector<vector<int>>& grid, int k, int i, int j, int cost,
6              vector<vector<vector<int>>>& t) {
7
8        if (i >= m || j >= n) return INT_MIN;
9
10        int newcost = cost + (grid[i][j] > 0 ? 1 : 0);
11
12        if (newcost > k) return INT_MIN;
13
14        if (i == m - 1 && j == n - 1) return grid[i][j];
15
16        if (t[i][j][newcost] != -1) return t[i][j][newcost];
17
18        int right = solve(grid, k, i, j + 1, newcost, t);
19        int down  = solve(grid, k, i + 1, j, newcost, t);
20
21        int best = max(right, down);
22
23        if (best == INT_MIN)
24            return t[i][j][newcost] = INT_MIN;
25
26        return t[i][j][newcost] = grid[i][j] + best;
27    }
28
29    int maxPathScore(vector<vector<int>>& grid, int k) {
30        m = grid.size();
31        n = grid[0].size();
32
33        vector<vector<vector<int>>> t(
34            m, vector<vector<int>>(n, vector<int>(k + 1, -1)));
35
36        int result = solve(grid, k, 0, 0, 0, t);
37
38        return result == INT_MIN ? -1 : result;
39    }
40};