/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* curr = head;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        while(curr!=nullptr)
        {
            minHeap.push(curr->val);
            curr = curr->next;
        }
        curr = head;
        while(curr!=nullptr)
        {
            int num = minHeap.top();
            minHeap.pop();
            curr->val = num;
            curr = curr->next;
        }
        return head;
    }
};