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

int height(Node *root)
{
	if (root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1; // for depth -> return 0
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}

int main()
{
	Node *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    cout<<"Height of tree: "<<height(root);
	return 0;
}