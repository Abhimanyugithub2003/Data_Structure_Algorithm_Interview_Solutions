1class Solution {
2public:
3    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
4        int n=mat.size();
5        int m=mat[0].size();
6        map<int, vector<int>> mp;
7        for(int i=0;i<n;i++){
8            for(int j=0;j<m;j++){
9                mp[i+j].push_back(mat[i][j]);
10            }
11        }
12        vector<int> ans;
13        bool flip=true;
14        for(auto &it : mp){
15            if(flip){
16                reverse(it.second.begin(), it.second.end());
17            }
18            for(int &num : it.second){
19                ans.push_back(num);
20            }
21            flip = !flip;
22        }
23        return ans;
24    }
25};