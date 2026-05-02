1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int mx=0;
5        int mp=INT_MAX;
6        for(int i=0;i<prices.size();i++){
7            if(prices[i]<mp){
8                mp=prices[i];
9            }else if(prices[i]-mp>mx){
10                mx=prices[i]-mp;
11            }
12        }
13        return mx;
14    }
15};