#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,i,max,temp;
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
	
	max=v[n-1];
	v[n-1]=-1;
	
	for(i=n-2;i>=0;i--)
	{
	 if(v[i]>max)
	 {
	     temp=v[i];
	     v[i]=max;
	     max=temp;
	 }
	 else
	 {
	     v[i]=max;
	 }
	}
	
	cout<<"Modified array"<<endl;
	for(i = 0; i < n ; i++)
	{
	    cout<<v[i]<<" ";
	}
	
	return 0;
}