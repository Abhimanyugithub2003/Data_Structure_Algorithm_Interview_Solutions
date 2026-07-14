1class Solution {
2public:
3    string predictPartyVictory(string senate) {
4        int n=senate.length();
5        queue<int> Dr, Rd;
6        for(int i=0;i<n;i++){
7            if(senate[i]=='D'){
8                Dr.push(i);
9            }else{
10                Rd.push(i);
11            }
12        }
13        
14        while(!Dr.empty() && !Rd.empty()){
15            int D_vote = Dr.front();
16            int R_vote = Rd.front();
17            Dr.pop();
18            Rd.pop();
19            if(D_vote < R_vote){
20                
21                Dr.push(n+D_vote);
22            }else{
23                
24                Rd.push(n+R_vote);
25            }
26        }
27        if(!Dr.empty()) return "Dire";
28        return "Radiant";
29    }
30};