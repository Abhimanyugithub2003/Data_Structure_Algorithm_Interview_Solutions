1class Solution {
2public:
3    string largestNumber(vector<int>& arr) {
4        
5        auto mycomparator=[](int &a,int &b){
6            string s1=to_string(a);
7            string s2=to_string(b);
8            if(s1+s2>s2+s1){
9                return true;
10            }
11            return false;
12        };
13        int n=arr.size();
14        sort(arr.begin(),arr.end(),mycomparator);
15        string ans="";
16        for(int i=0;i<n;i++){
17            ans+=to_string(arr[i]);
18        }
19        if(ans[0] == '0')
20            return "0";
21        return ans;
22    }
23};