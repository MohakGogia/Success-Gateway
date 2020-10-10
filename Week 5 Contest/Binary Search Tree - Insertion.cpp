  Node * insert(Node * root, int data)
    {
        Node *temp = new Node(data);
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        if(root == NULL)
        {
            root = temp;
            return root;
        }
        if(data < root->data) 
            root->left  = insert(root->left, data); 
        else 
            root->right = insert(root->right, data);
        return root;
    }