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
	
    for(L = 0; L < n-1; L++)
    {
        if ( v[L] > v[L+1] )
            break;
    }

    if ( L == n-1 )
    {
        cout<<"Array is already sorted";
        return 0;
    }

    for(R = n-1; R > 0; R--)
    {
        if ( v[R] < v[R-1] )
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
	    {
            L = i;
            break;
        }
	}
	
	for(i = n-1; i >= R+1 ; i--)
	{
	    if (v[i] < max)
        {
	        R=i;
            break;
        }
	}
	
	cout<<"Max length: "<<R-L+1;
	
	return 0;
}