struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        ListNode* current = head;
        int ans = 0;
        while(current != nullptr){
            if(current->val == 0){
                if(ans > 0){
                    tail->next = new ListNode(ans);
                    tail = tail->next;
                    ans = 0;
                }
            } else{
                ans += current->val;
            }
            current = current->next;
        }
        return dummy->next;
    }
};