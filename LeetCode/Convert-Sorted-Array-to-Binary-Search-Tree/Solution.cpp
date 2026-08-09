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
14    TreeNode* balanceBST(vector<int>& nums, int start, int end){
15        if(start > end) return nullptr;
16        int   mid = start + (end - start)/2;
17        TreeNode* root = new TreeNode(nums[mid]);
18        root->left = balanceBST(nums, start, mid-1);
19        root->right = balanceBST(nums, mid+1, end);
20        return root;
21    }
22    TreeNode* sortedArrayToBST(vector<int>& nums) {
23        int n = nums.size();
24        return balanceBST( nums, 0, n-1);
25    }
26};