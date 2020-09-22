SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
    SinglyLinkedListNode* head=NULL;
    SinglyLinkedListNode* end=NULL;
    if(head1->data < head2->data)
    {
        head=end=head1;
        head1=head1->next;
        end->next=NULL;
    }
    else
    {
        head=end=head2;
        head2=head2->next;
        end->next=NULL;
    }
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data < head2->data)
        {
            end->next=head1;
            end=head1;
            head1=head1->next;
            end->next=NULL;
        }
        else
        {
            end->next=head2;
            end=head2;
            head2=head2->next;
            end->next=NULL;
        }
    }
    if(head1!=NULL)
        end->next=head1;
    if(head2!=NULL)
        end->next=head2;
    return head;
}

