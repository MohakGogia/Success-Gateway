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

int main()
{	
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
    	insert(6);
	cout<<"Linked List: "<<endl;
	display();
	return 0;
}
