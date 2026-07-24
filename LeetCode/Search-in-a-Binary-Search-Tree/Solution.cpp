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
14    TreeNode* searchBST(TreeNode* root, int val) {
15        if(!root) return nullptr;
16        if(root->val == val){
17            return root;
18        }else if(root->val < val){
19            return searchBST(root->right, val);
20        }else{
21            return searchBST(root->left, val);
22        }
23        return nullptr;
24    }
25};