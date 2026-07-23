1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        int n=s.length();
6        int i=0;
7        while(i<n){
8            char ch=s[i];
9            if(s.empty() || ch=='(' || ch=='{' || ch=='['){
10                st.push(ch);
11            }else if(!st.empty() && ch==')' && st.top()=='('){
12                st.pop();
13            }else if(!st.empty() && ch=='}' && st.top()=='{'){
14                st.pop();
15            }else if(!st.empty() && ch==']' && st.top()=='['){
16                st.pop();
17            }else if(!st.empty() && ch!=st.top() && (ch==')' || ch=='}' || ch==']') ){
18                return false;
19            }else if(st.empty() && (ch==')' || ch=='}' || ch==']')){
20                return false;
21            }
22            i++;
23        }
24        return (st.empty()) ? true : false;
25    }
26};