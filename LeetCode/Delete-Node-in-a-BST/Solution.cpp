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
29                return nullptr;
30            }
31            else if(!root->left){
32                TreeNode* temp = root->right;
33                delete root;
34                return temp;
35            }
36            else if(!root->right){
37                TreeNode* temp = root->left;
38                delete root;
39                return temp;
40            }else{
41                TreeNode* IS = getIS(root->right);
42                root->val = IS->val;
43                root->right = deleteNode(root->right, IS->val);
44            }
45        }
46        return root;
47    }
48};