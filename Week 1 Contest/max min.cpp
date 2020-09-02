// Time Complexity - O(nlog n)
// Sapce Complexity - O(n)


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,k;
    vector<int> v;

    cin>>n;
    cin>>k;
    
    for(i = 0; i < n ; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    long min = 99999999;
    sort(v.begin(),v.end());
    
    for(i = 0; i < n-k+1; i++){
        if(v[i+k-1]-v[i] < min)
            min = v[i+k-1]-v[i];
    }
    
    cout<<min;
    return 0;
}
        
    