DoublyLinkedListNode* reverse(DoublyLinkedListNode* head)
{
    DoublyLinkedListNode* temp=NULL;
    DoublyLinkedListNode* first=head;
    while(head != NULL)
    {
        temp=head->next;
        head->next=head->prev;
        head->prev=temp;
        head=head->prev;
        if(head != NULL && head->next == NULL)
            first=head;
    }
    return first;
}