#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node *left = NULL;
	Node *right = NULL;
};

Node *createNode(int data)
{
	Node *newnode = new Node();
	newnode->data = data;
	newnode->left = NULL;
	newnode->right= NULL;

	return newnode;
}

void createMirror(Node *root)
{
    if (root == NULL)
        return;
    Node *temp;
    createMirror(root->left);
    createMirror(root->right);
    temp=root->right;
    root->right=root->left;
    root->left=temp;
}

void display(Node *temp)
{
	if (temp != NULL)
	{
	display(temp->left);
    cout<<temp->data<<" ";
    display(temp->right);
	}
}

int main()
{
	Node *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->right->right = createNode(5);

    cout<<"In-Order view of Tree: "<<endl;
    display(root);

    createMirror(root);

    cout<<"\nMirror view of Tree:"<<endl;
    display(root);

	return 0;
}