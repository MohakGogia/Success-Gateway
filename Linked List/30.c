#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;
node *head=NULL,*ptr;

void create()
{
    int i;
    node *temp;
    head=(node*)malloc(sizeof(node));
    head->data=1;
    head->next=NULL;
    ptr=head;
    for(i=2;i<=6;i++){
        temp=(node*)malloc(sizeof(node));
        temp->data=i;
        ptr->next=temp;
        ptr=temp;
    } 
}

void show()
{
    printf("\nLinked List:\n");
    ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    };  
}

void swapdata()
{
    node *p=(node*)malloc(sizeof(node));
    p=head;
    while(p && p->next)
    {
        int temp = p->data;
        p->data = p->next->data;
        p->next->data = temp;
        p=p->next->next;
    }
}


int main() {
    create();
    show();
    swapdata();
    show();
    return 0;
}