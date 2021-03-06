/*
 * [82] Remove Duplicates from Sorted List II
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii
 *
 * Medium (28.84%)
 * Total Accepted:    100059
 * Total Submissions: 346709
 * Testcase Example:  '[]'
 *
 * 
 * Given a sorted linked list, delete all nodes that have duplicate numbers,
 * leaving only distinct numbers from the original list.
 * 
 * 
 * For example,
 * Given 1->2->3->3->4->4->5, return 1->2->5.
 * Given 1->1->1->2->3, return 2->3.
 * 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode node(0), *p = &node;
        while (head) {
            ListNode *cur = head;
            while (cur && cur->val == head->val) cur = cur->next;
            if (cur == head->next) { p->next = head; p = p->next; }
            head = cur;
        }
        p->next = NULL;
        return node.next;
    }
};
