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
14    bool isSame(TreeNode* root, TreeNode* subRoot){
15        if(!root || !subRoot) return root==subRoot;
16        bool leftTree = isSame(root->left, subRoot->left);
17        bool rightTree = isSame(root->right, subRoot->right);
18        return leftTree && rightTree && root->val==subRoot->val;
19    }
20    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
21      
22        if(!root || !subRoot) return root==subRoot;
23        if(root->val == subRoot->val && isSame(root, subRoot)){
24            return true;
25        }
26        bool leftTree = isSubtree(root->left, subRoot);
27        bool rightTree = isSubtree(root->right, subRoot);
28        return leftTree || rightTree;
29    }
30};