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

void leftViewUtil(Node *root,int level,int max_level)
{
    if(root == NULL)
        return ;
    if(max_level<level)
    {
        cout<<root->data<<" ";
        max_level=level;
    }
    leftViewUtil(root->left, level+1, max_level);
    leftViewUtil(root->right, level+1, max_level);
}

void leftView(Node *root)
{
    int max_level=0;
    leftViewUtil(root, 1, max_level);
}

int main()
{
	Node *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->right->left = createNode(5);
    root->right->right = createNode(6);
    root->right->right->left = createNode(7);

	leftView(root);

	return 0;
}