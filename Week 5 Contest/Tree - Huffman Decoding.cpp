void decode_huff(node * root, string s)
{
    int i=0;
    int size = s.size();
    node *temp = root;
    while(i<size)
    {
        if(s[i]=='0')
           temp=temp->left;
        else
            temp=temp->right;
        if(temp->left == NULL && temp->right == NULL)
            {
                cout<<temp->data;
                temp = root;
            }
        i++;
    }
}