#include <iostream>

using namespace std;

int main()
{
	int n,i,x;
	int a[10];
	
	cout<<"Enter n: "<<endl;
	cin>>n;

	cout<<"Enter array: "<<endl;
	for(int i = 0; i < n ; i++)
	{
		cin>>a[i];
	}
	
	x=a[0];
	
	for(int i = 1; i < n ; i++)
	{
		x ^= a[i];
	}
	
	cout<<"Odd occurence element: "<<endl;
	cout<<x;
    
	return 0;
}
