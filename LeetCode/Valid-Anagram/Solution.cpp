1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        int n=s.length(),m=t.length();
5        if(n!=m) return false;
6        unordered_map<char,int> mp1;
7        unordered_map<char,int> mp2;
8        for(auto &it: s){
9            mp1[it]++;
10        }
11        for(auto &it: t){
12            mp2[it]++;
13        }
14        int i=0;
15        while(i<n){
16            if(mp1.find(s[i])!=mp1.end() ){
17                if(mp2.find(s[i])==mp2.end())
18                 return false;
19                else{
20                    if(mp1[s[i]]!=mp2[s[i]]) return false;
21                }
22            }
23            i++;
24        }
25        return true;
26    }
27};