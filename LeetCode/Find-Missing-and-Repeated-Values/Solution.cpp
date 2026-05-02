1class Solution {
2public:
3    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
4        int n=grid.size();
5        vector<int> freq(n*n + 1,0);
6        int sum_for_repeated=0;
7        for(int i=0;i<n;i++){
8            for(int j=0;j<n;j++){
9                freq[grid[i][j]]++;
10                sum_for_repeated+=grid[i][j];
11            }
12        }
13        int ans=0;
14        for(int i=1;i<=n*n;i++){
15            if(freq[i]>1){
16                ans=i;
17                break;
18            }
19        }
20        int sum=(n * n) * (n * n + 1)/2;
21        int missing=sum-(sum_for_repeated-ans);
22        vector<int> result;
23        result.push_back(ans);
24        result.push_back(missing);
25        return result;
26
27    }
28};