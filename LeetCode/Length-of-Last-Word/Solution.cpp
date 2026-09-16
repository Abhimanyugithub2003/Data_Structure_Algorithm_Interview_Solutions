1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int j = s.length() - 1;
5        while(j >= 0 && s[j] == ' '){
6            j--;
7        }
8        int count = 0;
9        while(j >= 0 && s[j] != ' '){
10            count++;
11            j--;
12        }
13        return count;
14    }
15};