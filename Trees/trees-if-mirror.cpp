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

bool isMirror(Node *root1, Node *root2)
{
	if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    return (isMirror(root1->right,root2->left) && 
        isMirror(root1->left,root2->right) &&
        (root1->data == root2->data));
}

int main()
{
    // Tree 1
	Node *root1 = createNode(1);
	root1->left = createNode(2);
	root1->right = createNode(3);
	root1->left->left = createNode(4);
	root1->left->right = createNode(5);

    // Tree 2
    Node *root2 = createNode(1);
	root2->left = createNode(3);
	root2->right = createNode(2);
	root2->right->left = createNode(5);
	root2->right->right = createNode(4);

    int res = isMirror(root1,root2);
    if(res == true)
        cout<<"Trees are mirror of each other";
    else
        cout<<"Trees are not mirror of each other";
	return 0;
}