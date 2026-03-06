class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.length();
        stack<char> st;
        int i=1;
        st.push('1');
        while(i<n){
            char ch=s[i];
        if(!st.empty()){
            if(st.top()=='0' && ch=='1')
            return false;
            st.push(ch);
        }
        i++;
        }
        return true;
    }
};
