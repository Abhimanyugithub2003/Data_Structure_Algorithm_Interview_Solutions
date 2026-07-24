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
14    TreeNode* deleteNode(TreeNode* root, int key) {
15        if(!root) return nullptr;
16        if(root->val>key){
17            root->left=deleteNode(root->left,key);
18            return root;
19        }
20        else if(root->val<key){
21            root->right=deleteNode(root->right,key);
22            return root;
23        }else{
24            //if0 child
25            if(!root->left && !root->right){
26                delete(root);
27                return nullptr;
28            }
29            //if one child
30            if(!root->right){
31                TreeNode* temp=root->left;
32                delete(root);
33                return temp;
34            }
35            if(!root->left){
36                TreeNode* temp=root->right;
37                delete(root);
38                return temp;
39            }
40            //2 child
41            else{
42                TreeNode* parent=root;
43                TreeNode* child=root->left;
44                while(child->right){
45                    parent=child;
46                    child=child->right;
47                }
48                //parent!=root;
49                if(parent!=root){
50                    parent->right=child->left;
51                    child->left=root->left;
52                    child->right=root->right;
53                    delete(root);
54                    return child;
55                }else{
56                    child->right=root->right;
57                    delete(root);
58                    return child;
59                }
60            }
61        }
62    }
63};