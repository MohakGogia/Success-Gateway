#include <iostream>
#include <queue>

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

void levelOrder(Node *root)
{
	if (root == NULL)
    {
        return ;
    }
	queue<Node *> q;
    q.push(root);
    while(q.empty() == false)
    {
        Node *node= q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left!=NULL)
            q.push(node->left);
        if(node->right!=NULL)
            q.push(node->right);
    }
}

int main()
{
	Node *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);

    cout<<"Level-Order view of tree: "<<endl;
	levelOrder(root);
	return 0;
}