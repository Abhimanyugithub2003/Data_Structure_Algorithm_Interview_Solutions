1class Solution {
2public:
3    int n,m;
4    vector<vector<int>> direction{{1,0},{-1,0},{0,1},{0,-1}};
5    bool find(vector<vector<char>>& board, int i,int j,int idx, string word){
6        if(idx==word.length()){
7            return true;
8        }
9        if(i<0 || j<0 || i>=n || j>=m || board[i][j]=='$'){
10            return false;
11        }
12        if(board[i][j]!=word[idx]){
13            return false;
14        }
15        char temp=board[i][j];
16        board[i][j]='$';
17        for(auto &dir : direction){
18            int new_i = i + dir[0];
19            int new_j = j + dir[1];
20            if(find(board,new_i,new_j,idx+1,word)){
21                return true;
22            }
23        }
24        board[i][j]=temp;
25        return false;
26    }
27    bool exist(vector<vector<char>>& board, string word) {
28         n=board.size();
29         m=board[0].size();
30         for(int i=0;i<n;i++){
31            for(int j=0;j<m;j++){
32                if(board[i][j]==word[0] && find(board, i, j, 0, word)){
33                    return true;
34                }
35            }
36         }
37         return false;
38    }
39};