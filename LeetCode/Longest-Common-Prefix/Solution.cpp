1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        int n=strs.size();
5        sort(begin(strs),end(strs));
6        string first=strs[0], last=strs[n-1];
7        int i=0;
8        string ans="";
9        while(i< first.length() && first[i]==last[i]){
10            
11            ans+=first[i];
12            i++;
13        }
14        return ans;
15    }
16};