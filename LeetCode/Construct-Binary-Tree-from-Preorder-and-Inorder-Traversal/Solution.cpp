1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int find(vector<int> in,int target,int start,int end){
15        for(int i=start;i<=end;i++){
16            if(in[i]==target) return i;
17        }
18        return -1;
19    }
20    TreeNode* tree(vector<int>& in,vector<int> &pre,int instart,int inend,int index){
21        if(instart>inend) return nullptr;
22        TreeNode* root=new TreeNode(pre[index]);
23        int pos=find(in,pre[index],instart,inend);
24        root->left=tree(in,pre,instart,pos-1,index+1);
25        root->right=tree(in,pre,pos+1,inend,index+(pos-instart)+1);
26        return root;
27    }
28    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
29        return tree(inorder,preorder,0,preorder.size()-1,0);    
30    }
31};