#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,i;
    vector<int> v;
    cin>>n;
    int size = n;
    
    for(i = 0; i < n ; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    for(i = 0 ; i < n; i++)
    {
        if(v[i]==v[i+1])
        size--;
    }
    
    cout<<size;
    
    return 0;
}