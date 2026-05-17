1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for(int i=0;i<s.length();i++){
6            char c=s[i];
7            if(c=='(' || c=='{' || c=='['){
8                st.push(c);
9            }else{
10                if(st.empty()) return false;
11                char top=st.top();
12                if((c==')' && top!='(') || (c=='}' && top!='{') || (c==']' && top!='[')){
13                    return false;
14                }
15                st.pop();
16            }
17        }
18        return st.empty();
19    }
20};