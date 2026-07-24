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
14    vector<int> rightSideView(TreeNode* root) {
15        if(!root) return {};
16        queue<TreeNode*> q;
17        vector<int> ans;
18        q.push({root});
19        while(!q.empty()){
20            int n=q.size();
21            while(n--){
22                auto node=q.front();
23                if(n==0) ans.push_back(node->val);
24                q.pop();
25                if(node->left) q.push(node->left);
26                if(node->right) q.push(node->right);
27            }
28        }
29        return ans;
30    }
31};