#include <iostream>
using namespace std;

int main()
{
	int i,j,m,n;
	int a[20][20];
	int minr,minc,maxr,maxc;
	
	cout<<"Enter m and n: "<<endl;
	cin>>m>>n;
	cout<<"Enter matrix: "<<endl;
	for(i = 0; i < m ; i++)
	{
	    for(j = 0; j < n ; j++)
	    {
		cin>>a[i][j];
	    }
	}
	
    minr = 0;
    minc = 0;
    maxr = m-1;
    maxc = n-1;
    int total = m*n;
    int count = 0;

    while( count < total )
    {
        // top wall
        for( i = minc ; i <= maxc && count < total; i++ )
        {
            cout<<a[minr][i]<<endl;
            count++;
        }
        minr++;

        // right wall
        for( i = minr; i <= maxr && count < total ; i++ )
         {
            cout<<a[i][maxc]<<endl;
            count++;
         }
         maxc--;

        // bottom wall
        for( i = maxc ; i >= minc && count < total ; i-- )
        {
            cout<<a[maxr][i]<<endl;
            count++;
        }
        maxr--;

        // left wall
        for( i = maxr; i>= minr && count < total ; i-- )
        {
            cout<<a[i][minc]<<endl;
            count++;
        }
        minc++;
    }
	
	return 0;
}