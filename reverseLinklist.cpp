class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p, *q, *r;
        p = head;
        q = NULL;
        r = NULL;
        while(p != NULL)
        {
            //p->next = q;
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        return q;
    }
};