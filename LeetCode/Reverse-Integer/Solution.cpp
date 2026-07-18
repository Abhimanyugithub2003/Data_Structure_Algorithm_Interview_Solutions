1class Solution {
2public:
3    int reverse(int x) {
4        int n=x,sum=0;
5        while(x!=0){
6            int l=x%10;
7            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && l > 7)) return 0;
8            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && l < -8)) return 0;
9            sum*=10;
10            sum+=l;
11            x/=10;
12        }
13        
14        return sum;
15    }
16};