SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head)
{
    SinglyLinkedListNode* p=head;
    SinglyLinkedListNode* temp=head->next;
    while(temp!=NULL)
    {
        if(p->data != temp->data)
        {
            p=temp;
            temp=temp->next;
        }
        else
        {
            p->next=temp->next;
            free(temp);
            temp=p->next;
        }
    }
    return head;
}
