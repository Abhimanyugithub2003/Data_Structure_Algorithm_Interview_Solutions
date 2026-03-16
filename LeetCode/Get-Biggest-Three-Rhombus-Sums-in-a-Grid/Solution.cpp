1class Solution {
2public:
3    vector<int> getBiggestThree(vector<vector<int>>& grid) {
4        int m = grid.size();
5        int n = grid[0].size();
6        set<int> st;
7
8        auto addToSet = [&](int val) {
9            st.insert(val);
10            if (st.size() > 3)
11                st.erase(begin(st));
12        };
13
14        for (int r = 0; r < m; r++) {
15            for (int c = 0; c < n; c++) {
16
17                addToSet(grid[r][c]);   //every cell is valid for rohmbus of side = 0
18
19                for (int side = 1; r-side >= 0 && r+side < m && c-side >= 0 && c+side < n; side++) {
20
21                    int sum = 0;
22
23                    for (int k = 0; k < side; k++) {
24                        sum += grid[r - side + k][c + k];   // top to right corner
25                        sum += grid[r + k][c + side - k];   // right to bottom corner
26                        sum += grid[r + side - k][c - k];   // bottom to left corner
27                        sum += grid[r - k][c - side + k];   // left to top corner
28                    }
29
30                    addToSet(sum);
31                }
32            }
33        }
34
35        return vector<int>(rbegin(st), rend(st));
36    
37    }
38};