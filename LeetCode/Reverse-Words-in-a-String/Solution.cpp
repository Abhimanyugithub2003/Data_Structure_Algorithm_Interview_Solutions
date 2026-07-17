1class Solution {
2public:
3    string reverseWords(string s) {
4        int n=s.length();
5        string result="";
6        reverse(s.begin(),s.end());
7        for(int i=0;i<n;i++){
8            string word="";
9            while(i<n && s[i]!=' '){
10                word+=s[i];
11                i++;
12            }
13            reverse(word.begin(),word.end());
14            if(word.length()>0){
15                result+= " " + word;
16            }
17        }
18        return result.substr(1);
19    }
20};