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
14    TreeNode* invertTree(TreeNode* root) {
15        if(!root) return nullptr;
16        queue<TreeNode*> q;
17        q.push(root);
18        while(!q.empty()){
19            int N = q.size();
20            while(N--){
21                auto node = q.front();
22                q.pop();
23                swap(node->left, node->right);
24                if(node->left){   
25                    q.push(node->left);
26                }
27                if(node->right){ 
28                    q.push(node->right);
29                }   
30
31            }
32        }
33        return root;
34    }
35};