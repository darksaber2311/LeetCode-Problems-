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

    ListNode* merge(ListNode* node1,ListNode* node2)
    {
        ListNode* p1 = node1;
        ListNode* p2 = node2;
        ListNode* newNode = new ListNode(0);
        ListNode* res = newNode;
        while(p1!=nullptr && p2!= nullptr)
        {
            if(p1->val <= p2->val)
            {
                newNode->next = p1;
                p1 = p1->next;
                
            }
            else
            {
                newNode->next = p2;
                p2 = p2->next;
            }
            newNode = newNode->next;
        }
        newNode->next = p1?p1:p2;
        return res->next;


    }
    ListNode* mergeKLists(vector<ListNode*> &lists) {
        //ListNode* newNode = nullptr;
        // normal approach with O(nk) complexity
       /* if(lists.empty())return nullptr; // basecase
        int k = lists.size();
        if(k == 1)return lists[0]; // basecase

        ListNode* merged = merge(lists[0],lists[1]);
        lists[0] = merged;
        for(int i = 1;i<k-1;i++)
        {
            lists[i] = lists[i+1];
        }
        lists.pop_back();
        ListNode* result = mergeKLists(lists);
        return result;*/

        // ----- ------      DIVIDE AND CONQUER ---------------------
        if(lists.empty())return nullptr;
        int k = lists.size();
        if(k == 1)return lists[0];
        int mid  = k/2;
        vector<ListNode*> first;
        vector<ListNode*> second;
        for(int i = 0;i<mid;i++)
        {
            first.push_back(lists[i]);
        }
        for(int i = mid;i<k;i++)
        {
            second.push_back(lists[i]);
        }
        ListNode* list1 = mergeKLists(first);
        ListNode* list2 = mergeKLists(second);

        return merge(list1,list2);
         
    }
};