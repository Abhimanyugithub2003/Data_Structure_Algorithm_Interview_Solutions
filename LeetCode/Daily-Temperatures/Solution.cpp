1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n=temperatures.size();
5        stack<int> st;
6        vector<int> ans(n);
7        for(int i=n-1;i>=0;i--){
8            if(st.empty()){
9                ans[i]=0;
10            }else{
11                while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
12                    st.pop();
13                }
14                ans[i]=(st.empty())?0:st.top()-i;
15            }
16            st.push(i);
17        }
18        return ans;
19    }
20};