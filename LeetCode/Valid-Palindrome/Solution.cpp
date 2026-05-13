1class Solution {
2public:
3vector<char> capital = {
4    'A','B','C','D','E','F','G','H','I','J',
5    'K','L','M','N','O','P','Q','R','S','T',
6    'U','V','W','X','Y','Z'
7};
8
9vector<char> small = {
10    'a','b','c','d','e','f','g','h','i','j',
11    'k','l','m','n','o','p','q','r','s','t',
12    'u','v','w','x','y','z'
13};
14
15bool isUpperLetter(char ch){
16    for(int i=0;i<26;i++){
17        if(ch==capital[i]){
18            return true;
19        }
20    }
21    return false;
22}
23
24bool isSmallerLetter(char ch){
25    for(int i=0;i<26;i++){
26        if(ch==small[i]){
27            return true;
28        }
29    }
30    return false;
31}
32
33bool isDigit(char ch){
34    return ch >= '0' && ch <= '9';
35}
36
37bool isPalin(string &str){
38    int n=str.length();
39    int i=0,j=n-1;
40    while(i<=j){
41        if(str[i]==str[j]){
42            i++;
43            j--;
44        }else{
45            return false;
46        }
47    }
48    return true;
49}
50    bool isPalindrome(string s) {
51        int n=s.length();
52        string str="";
53        for(int i=0;i<n;i++){
54            if(isUpperLetter(s[i])){
55                
56                char small_letter=s[i] + 32;
57                str+=small_letter;
58            }
59            else if(isSmallerLetter(s[i]) || isDigit(s[i])){
60                str+=s[i];
61            }
62           
63        }
64        return isPalin(str);
65    }
66};