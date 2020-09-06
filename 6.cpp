#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,i,max;
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
	
	cout<<"Leaders in array:"<<endl;

	max=v[n-1];
	cout<<max<<" ";
	
	for(i=n-2;i>=0;i--)
	{
		if(v[i]>max)
		{
			max=v[i];
			cout<<max<<" ";
		}
	}

	return 0;
}