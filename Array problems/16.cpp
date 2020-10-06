#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,i;
    vector<int> v;
    int min_elem;
    int max_diff;
    
    cout<<"Enter n: "<<endl;
    cin>>n;
    
    cout<<"Enter array: "<<endl;
    for(i = 0; i < n ; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    min_elem = v[0];
    max_diff = v[1] - v[0];
    
    for(i = 1; i < n ; i++)
    {
        if((v[i]-min_elem) > max_diff )
            max_diff = v[i]-min_elem;
        if( v[i] < min_elem )
            min_elem = v[i];
    }
    
    cout<<"Max difference: "<<max_diff;
    
    return 0;
}