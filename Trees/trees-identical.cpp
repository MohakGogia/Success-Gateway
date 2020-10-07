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

bool isIdentical(Node *root1, Node *root2)
{
	if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    if (root1->data != root2->data)
        return false;
    return (isIdentical(root1->right,root2->right) && 
        isIdentical(root1->left,root2->left));
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
	root2->left = createNode(2);
	root2->right = createNode(3);
	root2->left->left = createNode(4);
	root2->left->right = createNode(5);

    int res = isIdentical(root1,root2);
    if(res == true)
        cout<<"Trees are identical";
    else
        cout<<"Trees are not identical";
	return 0;
}