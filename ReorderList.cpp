class Solution {
public:
    void reorderList(ListNode* head) 
    {
        //if 
        if(!head || !(head->next) || !(head->next->next))
            return;

        //find second last node of the linklist
        ListNode* secondLastNode = head;
        while(secondLastNode->next->next) secondLastNode = secondLastNode->next;

        //now start relinking
        secondLastNode->next->next = head->next;
        head->next = secondLastNode->next;

        //now this is important(deeply think)
        //do paper work for this if you don't do this you may occur T.L.E.
        secondLastNode->next = NULL;

        //do it again
        //why head->next->next ?
        //because over fisrt two node is sutable for ans ther for don't change it.
        reorderList(head->next->next);
    }
    //:)
};