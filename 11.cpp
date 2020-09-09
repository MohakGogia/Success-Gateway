#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i,n,flag=0;
	vector<int> v;
	vector<int> gel;
	vector<int> ser;
	
	cout<<"Enter n: "<<endl;
	cin>>n;

	cout<<"Enter array: "<<endl;
	for(i = 0; i < n ; i++)
	{
	    int num;
	    cin>>num;
		v.push_back(num);
	}
	
	int max = v[0];
    for(i = 0; i < n; i++)
    {
        if(max > v[i])
            gel.push_back(max);
        else 
        {
            max = v[i];
            gel.push_back(max);
        }
        
    }
    
    int min = v[n-1];
    for(i = n-1; i >= 0; i--)
    {
        if(min < v[i])
            ser.push_back(min);
        else 
        {
            min = v[i];
            ser.push_back(min);
        }
        
    }
    
    for(i = 0; i < n ; i++)
	{
	    if( gel[i] == ser[i])
	    {
	        cout<<"Partition Point: "<<v[i];
	        flag = 1;
	        break;
	    }
	}
    
    if(flag ==0 )
        cout<<"No Partition Point";
	
	return 0;
}