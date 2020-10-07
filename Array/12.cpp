#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	int i,n;
	int max_end_here = 0;
	int max_sum_sofar = INT_MIN;
	
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
        max_end_here = max_end_here + v[i];
        if( max_end_here < 0)
            max_end_here = 0;
        if( max_sum_sofar < max_end_here )
            max_sum_sofar = max_end_here;
    }
	
	cout<<"Maximum Sum: "<<max_sum_sofar; 
	
	return 0;
}