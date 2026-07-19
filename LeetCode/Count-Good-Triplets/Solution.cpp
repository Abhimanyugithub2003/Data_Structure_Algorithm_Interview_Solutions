1class Solution {
2public:
3    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
4        int n=arr.size();
5        int count=0;
6        for(int i=0;i<n;i++){
7            for(int j=i+1;j<n;j++){
8                for(int k=j+1;k<n;k++){
9                    if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[k]-arr[i])<=c){
10                        count++;
11                    }
12                }
13            }
14        }
15        return count;
16    }
17};