#include <iostream>
#include <vector>

using namespace std;

int bsearch(vector<int> v, int l, int h, int key)
{
    int mid;
    while(l<=h)
    {
    mid = l + (h-l)/2;
    if(v[mid]== key)
        return mid;
    if(key > v[l] && key <= v[mid])
        return bsearch(v, l, mid-1, key);
    return bsearch(v, mid+1, h, key);
    if(key >= v[mid] && key <= v[h])
        return bsearch(v, mid+1, h, key);
    return bsearch(v, l, mid-1, key);
    }
    
    return -1;
}

int main()
{
	int n,i,key;
	vector<int> v;
	
	cout<<"Enter n: "<<endl;
	cin>>n;
	
	cout<<"Enter key: "<<endl;
	cin>>key;

	cout<<"Enter array: "<<endl;
	for(i = 0; i < n ; i++)
	{
	    int num;
	    cin>>num;
		v.push_back(num);
	}
	
	int pos = bsearch(v, 0, n, key);
	
	if(pos == -1)
	    cout<<"Not found";
    else
        cout<<"Found at: "<<pos;
	
	return 0;
}