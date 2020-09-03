#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m,i,len,L;

    cin>>n>>m;
    
    int a[n+m];
    int b[m];
    
    for(i = 0 ;i < n;i++)
    {
        cin>>a[i];
    }
    
    for(i = 0;i < m;i++)
    {
        cin>>b[i];
    }
    
    L = n+m;
    len = L-1;
    n--;
    m--;
    
    while(len >= 0)
    {
        if(m < 0)
            a[len] = a[n--];
        else if(n < 0)
            a[len] = b[m--];
        else if(a[n] > b[m])
            a[len] = a[n--];
        else
            a[len] = b[m--];
        len--;
    }
    
    for(i = 0;i < L;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}