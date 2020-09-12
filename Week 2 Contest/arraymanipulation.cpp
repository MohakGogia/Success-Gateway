// Time Complexity - O(n)
// Sapce Complexity - O(1)


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i,n,m,a,b,k;
    long long s=0,sum=0;

    cin>>n>>m;
    
    vector<int> v(n,0); 
    
    while(m--)
    {
        cin>>a>>b>>k;
        v[a-1] += k;
        v[b] -= k;
    }
    

    for(i = 0; i < n; i++)
    {
        s += v[i];
        if(s>sum)
            sum=s;
    }

    cout<<sum;

    return 0;
}