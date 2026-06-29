1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        
5        int low=1;
6        int high=num;
7        long long ans;
8        while(low<=high){
9            long long mid=low+(high-low)/2;
10            if(mid * mid == num) {
11                return true;
12            }else if(mid * mid > num){
13               
14                high=mid-1;
15            }else{
16                
17                low=mid+1;
18            }
19        }
20        return false;
21        
22    }
23};