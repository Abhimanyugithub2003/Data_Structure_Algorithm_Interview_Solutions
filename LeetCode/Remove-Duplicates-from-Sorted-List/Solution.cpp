1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteDuplicates(ListNode* head) {
14        ListNode* temp=head;
15        while(temp){
16            while(temp->next && temp->val==temp->next->val){
17                ListNode* dupl=temp->next;
18                temp->next=temp->next->next;
19                delete(dupl);
20            }
21            temp=temp->next;
22        }
23        return head;
24    }
25};
26