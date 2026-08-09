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
14    TreeNode* getIS(TreeNode* root){
15        TreeNode* curr = root;
16        while(curr->left){
17            curr=curr->left;
18        }
19        return curr;
20    }
21    TreeNode* deleteNode(TreeNode* root, int key) {
22        if(!root) return nullptr;
23        if(root->val > key){
24            root->left = deleteNode(root->left, key);
25        }else if(root->val < key){
26            root->right = deleteNode(root->right, key);
27        }else{
28            if(!root->left && !root->right){
29                delete root;
30                return nullptr;
31            }
32            else if(!root->left){
33                TreeNode* temp = root->right;
34                delete root;
35                return temp;
36            }
37            else if(!root->right){
38                TreeNode* temp = root->left;
39                delete root;
40                return temp;
41            }else{
42                TreeNode* IS = getIS(root->right);
43                root->val = IS->val;
44                root->right = deleteNode(root->right, IS->val);
45            }
46        }
47        return root;
48    }
49};