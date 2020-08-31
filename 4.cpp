#include <iostream>
#include <vector>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;           
    b = temp;
}

int main()
{
	int n,i,l,m,h,temp;
	vector<int> v;
	
	cout<<"Enter n: "<<endl;
	cin>>n;
	
	cout<<"Enter array: "<<endl;
	for(i = 0; i < n ; i++)
	{
	    int num;
	    cin>>num;
	    v.push_back(num);
	}
	
	l=m=0;
	h=n-1;
	
	while(m <= h)
	{
	if(v[m] == 0)
	{
	    swap(v[m],v[l]);
	    m++;
	    l++;
	}
	else if(v[m] == 2)
	{
	    swap(v[m],v[h]);
	    h--;
	}
	else if (v[m] == 1)
	{
	  m++;
	}
	}
	
	cout<<"Sorted array:"<<endl;
	for(i = 0; i < n ; i++)
	{
	    cout<<v[i]<<" ";
	}
	return 0;
}
