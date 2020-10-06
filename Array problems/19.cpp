#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int n,i,min;
	vector<int> v;
	set<int> s;

	cout<<"Enter n: "<<endl;
	cin>>n;

	cout<<"Enter array: "<<endl;
	for(i = 0; i < n ; i++)
	{
	    int num;
	    cin>>num;
	    v.push_back(num);
	}

    min = -1;
    for(i = n; i >= 0 ; i--)
	{
        if( s.find(v[i]) != s.end() )
            min = i;
        else
            s.insert(v[i]);
    }

    if ( min==-1 )
        cout<<"No such element";
    else
        cout<<"First repeating element: "<<v[min];
      
    return 0;
}