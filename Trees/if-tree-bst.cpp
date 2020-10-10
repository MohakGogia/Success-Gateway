#include <iostream>
#include<vector>

using namespace std;

vector<int> v;

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

void isBST(Node *temp)
{
	if(temp != NULL)
	{
	isBST(temp->left);
    v.push_back(temp->data);
    isBST(temp->right);
	}
}

int main()
{
	Node *root = createNode(4);
	root->left = createNode(2);
	root->right = createNode(5);
	root->left->left = createNode(1);
	root->left->right = createNode(3);

	isBST(root);

    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]>=v[i])
        {
            cout<<"Not BST";
            return 0;
        }
    }
    cout<<"Tree is BST";
	return 0;
}