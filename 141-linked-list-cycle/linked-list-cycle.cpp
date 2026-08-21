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
    bool hasCycle(ListNode *head) {
    // two ways to solve problem
    // 1.Hashmaps to detect if a node is visited twice -- Time O(n) and Space(O(n))
    // 2.Fast and slow pointers -- Time O(n) and Space(O(1)) -- bettter solution
    // this fast and slow pointer method is called floyd's cycle detection algo or floyd's algo

    ListNode* fast = head;
    ListNode* slow = head; 
    while( fast!=nullptr && fast->next!=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}
};