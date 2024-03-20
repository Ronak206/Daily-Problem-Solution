#include <bits/stdc++.h>
using namespace std;

class ListNode{
    
    public:
    int val;
    ListNode* next;
    
    ListNode(int val = 0)
    {
        this->val = val;
        this->next = NULL;
    }
};
//add to tail
ListNode* addTail(ListNode* root)
{
    int n;
    ListNode* tmpHead = root;
    while(tmpHead->next)
        tmpHead = tmpHead->next;
        
    while(cin>>n)
    {
        if(n == -1)
            break;
        auto tmp = new ListNode(n);
        tmpHead->next = tmp;
        tmpHead = tmp;
    }
    return root;
}
//add to head
ListNode* addHead(ListNode* root)
{
    int n;
    ListNode* newHead = NULL;
    
    while(cin>>n)
    {
        if(n == -1)
            break;
        auto tmp = new ListNode(n);
        tmp->next = newHead; 
        newHead = tmp; 
    }
    
    if (newHead == NULL) 
        return root;
    
    return newHead;
}

void print(ListNode* root)
{
    while(root)
    {
        cout<<root->val<<"->";
        root = root->next;
    }
}

int main()
{
    ListNode* root = new ListNode();
    cout<<"Add to Head"<<endl;
    root = addHead(root);
    cout<<"Add to Tail"<<endl;
    root = addTail(root);
    cout<<"Final LinkList is :"<<endl;
    print(root);
}
//:)