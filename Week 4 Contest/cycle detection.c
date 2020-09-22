bool has_cycle(SinglyLinkedListNode* head)
{
    SinglyLinkedListNode* p;
    SinglyLinkedListNode* q;
    p=q=head;
    do
    {
        p=p->next;
        q=q->next;
        if(q != NULL)
            q=q->next;
    }while(p != NULL && q != NULL && p != q);
    if(p == q)
        return 1;
    else
        return 0;
}
