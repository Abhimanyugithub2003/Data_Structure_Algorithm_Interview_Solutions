1class Solution {
2public:
3    int MOD = 1e9 +7;
4    vector<vector<int>> dp;
5    int solve(int pref,int j,int cnt, vector<vector<int>> &reqs){
6        if(pref==0){
7            return cnt==0;
8        }
9        if(j>=0 && reqs[j][0]==pref){
10            if(reqs[j][1]!=cnt){
11                return 0;
12            }
13            j--;
14        }
15        if(dp[pref][cnt]!=-1) return dp[pref][cnt];
16        int ans=0;
17        for(int k=0;k<=min(pref, cnt);k++){
18            ans = (ans + solve(pref-1, j, cnt-k, reqs)) % MOD;
19        }
20        return dp[pref][cnt] = ans;
21    }
22    int numberOfPermutations(int n, vector<vector<int>>& requirements) {
23        dp = vector<vector<int>> (n+1, vector<int> (401, -1));
24        sort(begin(requirements), end(requirements));
25        return solve(n-1, requirements.size()-1, requirements.back()[1], requirements);
26    }
27};