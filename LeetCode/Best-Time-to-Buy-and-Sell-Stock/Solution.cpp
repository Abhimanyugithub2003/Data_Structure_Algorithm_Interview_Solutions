1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n=prices.size();
5        int maxprofit=0,bestbuy=prices[0];
6        for(int i=1;i<n;i++){
7            if(bestbuy<prices[i]){
8                maxprofit=max(maxprofit,prices[i]-bestbuy);
9            }
10            bestbuy=min(bestbuy,prices[i]);
11        }
12        return maxprofit;
13    }
14};