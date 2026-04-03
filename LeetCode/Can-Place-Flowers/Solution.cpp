1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        int N=flowerbed.size();
5        for(int i=0;i<N;i++){
6            if(flowerbed[i]==0){
7                int left=(i==0) ? 0 : flowerbed[i-1];
8                int right=(i==N-1) ? 0 : flowerbed[i+1];
9                if(left==0 && right==0){
10                flowerbed[i]=1;
11                n--;
12            }
13            }
14            
15        }
16        return(n<=0);
17    }
18};