#include <iostream>

using namespace std;

struct Node 
{
	int data;
	Node *next;
};

Node *head = NULL;

Node *createNode(int data)
{
	Node *newnode = new Node();
	newnode->data = data;

	return newnode;
}

void insert(int data)
{	
	Node *temp = createNode(data);
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		Node *t = head;
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = temp;
	}
}


void display()
{
	Node *ptr = head;
	while(ptr != NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

void swapdata()
{
    Node *p = head;
    while(p && p->next)
    {
        int temp = p->data;
        p->data = p->next->data;
        p->next->data = temp;
        p=p->next->next;
    }
}

int main()
{	
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
    cout<<"Linked List: "<<endl;
	display();
    swapdata();
    cout<<"\nLinked List after swapping: "<<endl;
    display();

	return 0;
}