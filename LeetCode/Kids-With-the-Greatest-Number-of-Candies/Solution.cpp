1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int C) {
4        int mx=INT_MIN;
5        for(auto &it:candies){
6            if(it>mx) mx=it;
7        }
8        vector<bool> result;
9        for(int it: candies){
10            if(it+C>=mx){
11                result.push_back(true);
12            }else{
13                result.push_back(false);
14            }
15        }
16        return result;
17    }
18};