#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,i,x;
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
	
	x=v[0];
	
	for(i = 1; i < n ; i++)
	{
		x ^= v[i];
	}
	
	cout<<"Odd occurence element: "<<endl;
	cout<<x;
    
	return 0;
}
