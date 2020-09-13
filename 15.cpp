#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n,i,l,r,x;
  bool flag = false;
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

  sort(v.begin(), v.end());

  for(i = 0; i < n-1 ; i++)
	{
    l = i+1;
    r = n-1;
    x = v[i];
    while( l < r)
    {
      if( x+v[l]+v[r] == 0)
      {
        cout<<x<<" "<<v[l]<<" "<<v[r]<<endl;
        flag = true;
        l++;
        r--;
      }
      else if( x+v[l]+v[r] < 0 )
      {
        l++;
      }
      else
      {
        r--;
      }
    }
	}

  if( flag == false )
    cout<<"No such triplets";

  return 0;
}