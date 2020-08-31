#include <iostream>

using namespace std;

void reverse(int *a, int start,int end)
{
    while(start<end)
    {
    int temp;
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;
    }
}

int main()
{
	int n,i,d;
	int a[10];
	
	cout<<"Enter n: "<<endl;
	cin>>n;
	
	cout<<"Enter array: "<<endl;
	for(i = 0; i < n ; i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter d: "<<endl;
	cin>>d;
	
	reverse(a,0,d-1);
	reverse(a,d,n-1);
	reverse(a,0,n-1);
	
	cout<<"Left Rotated array:"<<endl;
	for(i = 0; i < n ; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
