1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        unordered_map<char, int> mp;
5        for(auto it : s){
6            mp[it]++;
7        }
8        for(auto it: t){
9            mp[it]--;
10        }
11        for(auto it : mp){
12            if(it.second!=0) return false;
13        }
14        return true;
15    }
16};