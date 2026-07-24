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
16        return isSame(root->left, subRoot->left) && isSame(root->right, subRoot->right) && (root->val == subRoot->val);
17    }
18    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
19        if(!subRoot) return true;
20        if(!root ) return false;
21        if(root->val == subRoot->val && isSame(root, subRoot)){
22            return true;
23        }
24        bool leftT =  isSubtree(root->left, subRoot);
25        bool rightT =  isSubtree(root->right, subRoot);
26        return leftT || rightT;
27
28    }
29};