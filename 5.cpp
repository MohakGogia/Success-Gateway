#include <iostream>
using namespace std;

int main()
{
	int i,j,m,n,val;
	int a[20][20];
	int rs,re,cs,ce;
	
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
	
	rs = a[0][0];
	re = a[m-1][0];
	cs = a[0][n-1];
	ce = a[m-1][n-1];
	        
	cout<<rs<<endl;
	cout<<re<<endl;
	cout<<cs<<endl;
	cout<<ce<<endl;
	
	return 0;
}