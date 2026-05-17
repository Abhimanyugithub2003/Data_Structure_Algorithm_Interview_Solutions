1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int n=s.length();
5        int left=0;
6        int maxfreq=0;
7        int maxL=0;
8        vector<int> freq(26,0);
9        for(int right=0;right<n;right++){
10            freq[s[right]-'A']++;
11            maxfreq=max(maxfreq,freq[s[right]-'A']);
12            while((right-left+1)-maxfreq>k){
13                freq[s[left]-'A']--;
14                left++;
15            }
16            maxL=max(maxL,right-left+1);
17        }
18        return maxL;
19    }
20};