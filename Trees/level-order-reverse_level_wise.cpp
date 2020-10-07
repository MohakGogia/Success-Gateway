#include <iostream>
#include <queue>
#include <stack>

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

void showstack(stack<int> s) 
{ 
    while(!s.empty()) 
    { 
        cout<< s.top()<<" "; 
        s.pop(); 
    } 
} 

void levelOrder(Node *root)
{
	if (root == NULL)
    {
        return ;
    }
	queue<Node *> q;
    stack<int> s;
    q.push(root);
    while(q.empty() == false)
    {
        Node *node= q.front();
        s.push(node->data);
        q.pop();
        if(node->right!=NULL)
            q.push(node->right);
        if(node->left!=NULL)
            q.push(node->left);
    }
    showstack(s);
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