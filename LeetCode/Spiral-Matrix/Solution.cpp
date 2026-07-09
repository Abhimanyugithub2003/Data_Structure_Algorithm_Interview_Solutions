1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        int top=0,left=0;
5        int right=matrix[0].size()-1, down=matrix.size()-1;
6        vector<int> ans;
7        int dir=0;
8        while(top <= down && left <= right){
9            if(dir==0){
10                for(int i=left;i<=right;i++){
11                ans.push_back(matrix[top][i]);
12                }
13                top++;
14            }
15            if(dir==1){
16                for(int i=top;i<=down;i++){
17                ans.push_back(matrix[i][right]);
18                }
19                right--;  
20            }
21            if(dir==2){ 
22                for(int i=right;i>=left;i--){
23                ans.push_back(matrix[down][i]);
24                }
25                down--;  
26            }
27           
28            if(dir==3){
29                for(int i=down;i>=top;i--){
30                ans.push_back(matrix[i][left]);
31                }
32                left++;
33            }   
34            dir++;
35            if(dir==4){
36                dir=0;
37            }    
38        }
39        return ans;
40    }
41};