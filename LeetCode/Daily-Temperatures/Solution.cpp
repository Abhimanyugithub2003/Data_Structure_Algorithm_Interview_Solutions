1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n=temperatures.size();
5        stack<int> st;
6        vector<int> result(n);
7        for(int i=n-1;i>=0;i--){
8            while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
9                st.pop();
10            }
11            if(st.empty()){
12                result[i]=0;
13            }
14            else{
15                result[i]=st.top()-i;
16            }
17            st.push(i);
18        }
19        return result;
20    }
21};