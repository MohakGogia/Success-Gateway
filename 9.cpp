#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i,n,L,R,max,min;
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
	
    for(i = 0; i < n; i++)
    {
        if ( v[i] > v[i+1] )
            L = i;
            break;
    }
    
    for(i = n-1; i >= 0; i--)
    {
        if ( v[i] < v[i-1] )
            R = i;
            break;
    }
    
    
    max = v[L];
    min = v[R];
    
    for(i = L+1 ; i <= R ; i++)
    {
        if (v[i] < min )
            min = v[i];
        if (v[i] > max)
            max = v[i];
    }
	
	for(i = 0; i < L ; i++)
	{
	    if (v[i] > min)
	        L=i;
	}
	
	for(i = n-1; i >= R+1 ; i--)
	{
	    if (v[i] < max)
	        R=i;
	}
	
	cout<<"Max length: "<<R-L;
	
	return 0;
}