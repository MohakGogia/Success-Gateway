#include <iostream>
using namespace std;

int main()
{
    int i,j,m,n,t;
    int a[20][20];
    int cnt=1;
    cin>>t;
    
    while(t--)
    {
        cin>>m>>n;
        
        for(i = 0; i < m ; i++)
        {
            for(j = 0; j < n ; j++)
            {
            cin>>a[i][j];
            }
        }
        
        int row[m] , col[n];
        
        for(i = 0; i < m ; i++)
        {
            for(j = 0; j < n ; j++)
            {
                if(a[i][j] == 1)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        
        for(i = 0; i < m ; i++)
        {
            for(j = 0; j < n ; j++)
            {
                if(row[i] == 1 || col[j] == 1)
                {
                   a[i][j] = 1;
                }
            }
        }
        
        cout<<cnt<<endl;
        for(i = 0; i < m ; i++)
        {
            for(j = 0; j < n ; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        
        cnt++;
    }
    
    return 0;
}