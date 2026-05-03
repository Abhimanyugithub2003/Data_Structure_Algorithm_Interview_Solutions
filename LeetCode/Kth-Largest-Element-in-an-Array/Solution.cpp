1class Solution {
2public:
3int partition_algo(vector<int> &nums,int L,int R){
4    int P=nums[L];
5    int i=L+1;
6    int j=R;
7    while(i<=j){
8        if(nums[i]<P && nums[j]>P){
9            swap(nums[i],nums[j]);
10            i++;
11            j--;
12        }
13        if(nums[i]>=P){
14            i++;
15        }
16        if(nums[j]<=P){
17            j--;
18        }
19    }
20    swap(nums[L],nums[j]);
21    return j;
22}
23    int findKthLargest(vector<int>& nums, int k) {
24        int n=nums.size();
25        int L=0;
26        int R=n-1;
27        int pivot_idx=0;
28        while(true){
29            pivot_idx=partition_algo(nums,L,R);\
30            if(pivot_idx==k-1){
31                break;
32            }else if(pivot_idx>k-1){
33                R=pivot_idx-1;
34            }else{
35                L=pivot_idx+1;
36            }
37        }
38        return nums[pivot_idx];
39    }
40};