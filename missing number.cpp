#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int i;
    vector<int> v;
    vector<int>::iterator it; 
    
    for(i = 1; i < 100 ; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    for(i = 1 ; i <= 100; i++)
    {
       it = find(v.begin(), v.end(), i); 
       if (it == v.end()){
           cout<<i;
           break;
       }
    }
    
    return 0;
}