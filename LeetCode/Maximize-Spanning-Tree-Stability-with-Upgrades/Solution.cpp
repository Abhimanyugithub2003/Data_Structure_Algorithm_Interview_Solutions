1class DSU {
2public:
3    vector<int> parent, rank;
4
5    DSU(int n) {
6        parent.resize(n);
7        rank.resize(n, 1);
8
9        for(int i = 0; i < n; i++) {
10            parent[i] = i;
11        }
12    }
13
14    int find (int x) {
15        if (x == parent[x]) 
16            return x;
17
18        return parent[x] = find(parent[x]);
19    }
20
21    bool Union(int x, int y) {
22        int x_parent = find(x);
23        int y_parent = find(y);
24
25        if (x_parent == y_parent) 
26            return false;
27
28        if(rank[x_parent] > rank[y_parent]) {
29            parent[y_parent] = x_parent;
30        } else if(rank[x_parent] < rank[y_parent]) {
31            parent[x_parent] = y_parent;
32        } else {
33            parent[x_parent] = y_parent;
34            rank[y_parent]++;
35        }
36
37        return true;
38    }
39};
40
41class Solution {
42public:
43
44    bool check(int n, vector<vector<int>>& edges, int k, int mid) {
45        DSU dsu(n);
46
47        vector<vector<int>> upgradeCandidates;
48
49        for(auto &edge : edges) { //E
50            int u = edge[0];
51            int v = edge[1];
52
53            int s = edge[2];
54            int m = edge[3];
55
56            if(m == 1) {
57                if(s < mid) {
58                    return false;
59                }
60
61                dsu.Union(u, v); //alpa
62            } else {
63                if(s >= mid) {
64                    //no need to upgrade
65                    dsu.Union(u, v);
66                } else if(2*s >= mid) {
67                    upgradeCandidates.push_back({u, v});
68                }
69            }
70        }
71
72        for(auto &edge : upgradeCandidates) { //O(E)
73            int u = edge[0];
74            int v = edge[1];
75
76            if(dsu.find(u) != dsu.find(v)) {
77                if(k <= 0)
78                    return false;
79                
80                dsu.Union(u, v);
81                k--; //upgrade
82            }
83        }
84
85
86        int root = dsu.find(0);
87        for(int node = 1; node <= n-1; node++) { //O(n)
88            if(dsu.find(node) != root)
89                return false;
90        }
91        return true;
92    }
93
94    int maxStability(int n, vector<vector<int>>& edges, int k) {
95         /*
96            Input: n = 3, edges = [[0,1,1,1],[1,2,1,1],[2,0,1,1]], k = 0
97            0 --- 1 --- 2 , parent = 0
98            (2, 0)
99            2 ka. parent kaun hai = 0
100            0 ka parent kaun hai  = 0
101
102        */
103
104        DSU dsu(n);
105        for(auto &edge : edges) {
106            int u = edge[0];
107            int v = edge[1];
108
109            int s = edge[2];
110            int m = edge[3];
111
112            if(m == 1) { //must be included in the spanning tree
113                if(dsu.find(u) == dsu.find(v))
114                    return -1;
115                
116                dsu.Union(u, v);
117            }
118        }
119
120
121        int result = -1;
122        int l = 1;
123        int r = 2*1e5;
124
125        //T.C : O(nlogn)
126        while(l <= r) {
127            int mid = l + (r-l)/2;
128
129            if(check(n, edges, k, mid)) {
130                result = mid;
131                l = mid+1;
132            } else {
133                r = mid -1;
134            }
135        }
136
137        return result;
138    }
139};
140
141
142