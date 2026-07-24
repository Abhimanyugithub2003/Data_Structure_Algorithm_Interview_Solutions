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
14int ans=0;
15    int height(TreeNode* root){
16        if(!root) return 0;
17        int leftH=height(root->left);
18        int rightH=height(root->right);
19        ans = max(ans, leftH + rightH);
20        return 1+max(leftH , rightH);
21    }
22    int diameterOfBinaryTree(TreeNode* root) {
23        height(root);
24        return ans;
25    }
26};