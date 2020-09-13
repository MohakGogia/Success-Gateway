#include <iostream>

using namespace std;

int main()
{
    int i,j,n,temp;
    int a[20][20];
    
    cin>>n;

    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
        {
        cin>>a[i][j];
        }
    }

    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < i ; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for(i = 0; i < n ; i++)
    {
        int l_index = 0;
        int r_index = n-1;
        while(l_index < r_index){
            temp = a[i][l_index];
            a[i][l_index] = a[i][r_index];
            a[i][r_index] = temp;
            l_index++;
            r_index--;
        }
    }
    
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}