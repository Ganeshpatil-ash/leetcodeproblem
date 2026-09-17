class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while (prev->next != nullptr && prev->next->next != nullptr) {

            ListNode* first = prev->next;
            ListNode* second = first->next;
            ListNode* nextPair = second->next;

            // Swap
            second->next = first;
            first->next = nextPair;
            prev->next = second;

            // Move to next pair
            prev = first;
        }

        return dummy->next;
    }
};