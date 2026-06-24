1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        vector<int> ans(m+n);
5        int i=0,j=0,k=0;
6        while(i<m && j<n){
7            if(nums1[i]<=nums2[j]){
8                ans[k]=nums1[i];
9                k++;
10                i++;
11            }else{
12                ans[k]=nums2[j];
13                k++;
14                j++;
15            }
16        }
17        while(i<m){
18            ans[k++]=nums1[i++];
19        }
20        while(j<n){
21            ans[k++]=nums2[j++];
22        }
23        nums1=ans;
24    }
25};