1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        int top=0,left=0;
5        int right=matrix[0].size()-1, down=matrix.size()-1;
6        vector<int> ans;
7        while(top <= down && left <= right){
8            for(int i=left;i<=right;i++){
9                ans.push_back(matrix[top][i]);
10            }
11            top++;
12            for(int i=top;i<=down;i++){
13                ans.push_back(matrix[i][right]);
14            }
15            right--;  
16            if(top<=down){
17                for(int i=right;i>=left;i--){
18                ans.push_back(matrix[down][i]);
19                }
20                down--;  
21            } 
22            if(left<=right){
23                for(int i=down;i>=top;i--){
24                ans.push_back(matrix[i][left]);
25                }
26                left++;
27            }
28            
29        }
30        return ans;
31    }
32};