class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head; 

        ListNode* slow = head, *fast = head, *prev = nullptr;
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = nullptr; 
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);

        return mergeTwoLists(left, right);
    }

private:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        current->next = list1 ? list1 : list2;
        ListNode* sortedHead = dummy->next;
        delete dummy;
        return sortedHead;
    }
};
