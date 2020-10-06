#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v, int start, int end)
{
    while(start < end)
    {
    int temp;
    temp = v[start];
    v[start] = v[end];
    v[end] = temp;
    start++;
    end--;
    }
}

int main()
{
	int n,i,d;
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
	
	cout<<"Enter d: "<<endl;
	cin>>d;
	
	if(d>n){
	d=d%n;
	}
	
	reverse(v,0,d-1);
	reverse(v,d,n-1);
	reverse(v,0,n-1);
	
	cout<<"Left Rotated array:"<<endl;
	for(i = 0; i < n ; i++)
	{
		cout<<v[i]<<" ";
	}
	
	return 0;
}
