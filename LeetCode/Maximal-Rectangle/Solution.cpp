1class Solution {
2public:
3vector<int> getnsr(vector<int> &height){
4    stack<int> st;
5    int n=height.size();
6    vector<int> NSR(n);
7    for(int i=n-1;i>=0;i--){
8        if(st.empty()){
9            NSR[i]=n;
10        }else{
11            while(!st.empty() && height[st.top()]>=height[i]){
12                st.pop();
13            }
14            if(st.empty()){
15                NSR[i]=n;
16            }else{
17                NSR[i]=st.top();
18            }
19        }
20        st.push(i);
21    }
22    return NSR;
23}
24vector<int> getnsl(vector<int> &height){
25    stack<int> st;
26    int n=height.size();
27    vector<int> NSL(n);
28    for(int i=0;i<n;i++){
29        if(st.empty()){
30            NSL[i]=-1;
31        }else{
32            while(!st.empty() && height[st.top()]>=height[i]){
33                st.pop();
34            }
35            if(st.empty()){
36                NSL[i]=-1;
37            }else{
38                NSL[i]=st.top();
39            }
40        }
41        st.push(i);
42    }
43    return NSL;
44}
45int findmaxarea(vector<int> &height){
46    vector<int> NSR=getnsr(height);
47    vector<int> NSL=getnsl(height);
48    int n=height.size();
49    vector<int> width(n);
50    for(int i=0;i<n;i++){
51        width[i]=NSR[i]-NSL[i]-1;
52    }
53    int maxArea=0;
54    for(int i=0;i<n;i++){
55        int a=width[i]*height[i];
56        maxArea=max(maxArea,a);
57    }
58    return maxArea;
59}
60    int maximalRectangle(vector<vector<char>>& matrix) {
61        int m=matrix.size();
62        int n=matrix[0].size();
63        vector<int> height(n);
64        for(int i=0;i<n;i++){
65            height[i]=(matrix[0][i]=='1')?1:0;
66        }
67        int maxArea=findmaxarea(height);
68        for(int row=1;row<m;row++){
69            for(int col=0;col<n;col++){
70                if(matrix[row][col]=='0'){
71                    height[col]=0;
72                }else{
73                    height[col]+=1;
74                }
75            }
76            maxArea=max(maxArea,findmaxarea(height));
77        }
78        return maxArea;
79    }
80};