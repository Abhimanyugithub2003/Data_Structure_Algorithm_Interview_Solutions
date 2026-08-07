1class Solution {
2public:
3    bool isValid(string s) {
4        int n = s.length();
5        stack<char> st;
6        for(int i=0;i<n;i++){
7            char ch = s[i];
8            if(ch == '(' || ch == '{' || ch == '['){
9                st.push(ch);
10            }else{
11                if(st.empty()) return false;
12                else{
13                    if((ch == ')' && st.top() == '(')
14                    || (ch == '}' && st.top() == '{')
15                    || (ch == ']' && st.top() == '[')){
16                        st.pop();
17                    }
18                    else{
19                        return false;
20                    }
21                }
22            }
23        }
24
25        return st.empty();
26    }
27};