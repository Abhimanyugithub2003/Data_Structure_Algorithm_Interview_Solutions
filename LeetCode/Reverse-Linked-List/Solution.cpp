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
13    ListNode* reverseList(ListNode* head) {
14        if(!head) return nullptr;
15        ListNode* nextptr=head;
16        ListNode* curr=head;
17        ListNode* prev=nullptr;
18        while(nextptr){
19            nextptr=nextptr->next;
20            curr->next=prev;
21            prev=curr;
22            curr=nextptr;
23        }
24        head=prev;
25        return head;
26    }
27};
28        