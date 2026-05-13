1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.length()!=t.length()) return false;
5        int freq[26]={0};
6        for(char &it: s){
7            freq[it-'a']++;
8        }
9        for(char&it : t){
10            freq[it-'a']--;
11        }
12        for(int i=0;i<26;i++){
13            if(freq[i]>0) return false;
14        }
15        return true;
16    }
17};