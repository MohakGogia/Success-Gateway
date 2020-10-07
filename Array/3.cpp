#include <iostream>
using namespace std;

void staircase_search(int a[][20], int m, int n, int val)
{
	int i,j;	
	i = 0;
	j = n-1;
	while(i < m && j >= 0)
	{
	if(a[i][j] == val)
	{
	   cout<<"True";
	   return;
	}
	else if(val < a[i][j])
	{
	j--;
	}
	else
	{
	i++;
	}
	}
	cout<<"False";
	return;
}

int main()
{
	int i,j,m,n,val;
	int a[20][20];
	
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
	
	cout<<"Enter val to search: "<<endl;
	cin>>val;
	
	staircase_search(a,m,n,val);
	    
	return 0;
}