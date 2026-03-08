1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string ans="";
5        int n=word1.length();
6        int m=word2.length();
7        int i=0,j=0;
8        while(i<n && j<m){
9            ans+=word1[i++];
10            ans+=word2[j++];
11        }
12        while(i<n) ans+=word1[i++];
13        while(j<m) ans+=word2[j++];
14        return ans;
15        
16    }
17};