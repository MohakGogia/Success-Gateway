vector<int> v;

void inOrder(Node *temp)
{
    if(temp != NULL)
    {
    inOrder(temp->left);
    v.push_back(temp->data);
    inOrder(temp->right);
    }
}

bool checkBST(Node* root)
{
    if(root == NULL)
        return false;
    
    inOrder(root);
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]>=v[i])
        {
            return false;
        }
    }
    return true;
}