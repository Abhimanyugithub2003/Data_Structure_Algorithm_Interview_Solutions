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
14    int serach(vector<int>& inorder, int left, int right, int val){
15        for(int i=left;i<=right;i++){
16            if(inorder[i]==val){
17                return i;
18            }
19        }
20        return -1;
21    }
22    TreeNode* buildTreeFromPreAndIn(vector<int>& preorder, vector<int>& inorder,int &preIdx,int left, int right){
23        if(left>right) return nullptr;
24        TreeNode* root = new TreeNode(preorder[preIdx]);
25        int inIdx = serach(inorder, left, right, preorder[preIdx]);
26        preIdx++;
27        root->left = buildTreeFromPreAndIn(preorder, inorder, preIdx,left, inIdx - 1);
28        root->right = buildTreeFromPreAndIn(preorder, inorder, preIdx, inIdx + 1, right);
29        return root;
30    }
31    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
32        int preIdx = 0;
33        return buildTreeFromPreAndIn(preorder, inorder, preIdx, 0, inorder.size() - 1);
34    }
35};