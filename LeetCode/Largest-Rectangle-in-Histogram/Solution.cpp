1class Solution {
2public:
3    vector<int> NSEL (vector<int>& heights){
4        int n = heights.size();
5        vector<int> result(n);
6        stack<int> st;
7        for(int i=0;i<n;i++){
8            while(!st.empty() && heights[st.top()] >= heights[i]){
9                st.pop();
10            }
11            if(st.empty()){
12                result[i] = -1;
13            }else{
14                result[i] = st.top();
15            }
16            st.push(i);
17        }
18        return result;
19    }
20    vector<int> NSER(vector<int> &heights){
21        int n =  heights.size() ;
22        vector<int> result(n);
23        stack<int> st;
24        for(int i=n-1;i>=0;i--){
25            while(!st.empty() && heights[st.top()] >= heights[i]){
26                st.pop();
27            }
28            if(st.empty()){
29                result[i] = n;
30            }else{
31                result[i] = st.top();
32            }
33            st.push(i);
34        }
35        return result;
36    }
37    int largestRectangleArea(vector<int>& heights) {
38        int n = heights.size();
39        vector<int> left = NSEL(heights);
40        vector<int> right = NSER(heights);
41        int ans = 0;
42        for(int i=0;i<n;i++){
43            int currWidth = heights[i] * (right[i] - left[i] - 1);
44            ans = max(ans, currWidth);
45        }
46        return ans;
47    }
48};