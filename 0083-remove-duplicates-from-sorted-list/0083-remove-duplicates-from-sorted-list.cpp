class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == nullptr) return head;
        
        ListNode* current = head;
        
        while(current != nullptr && current->next != nullptr) {
            
            if(current->val == current->next->val) {
                // Skip duplicate
                current->next = current->next->next;
            } else {
                // Move forward
                current = current->next;
            }
        }
        
        return head;
    }
};
