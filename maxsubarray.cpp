#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int i,n,t;
    int max_end_here;
    int max_sum_sofar;
    int sum;
    
    cin>>t;

    while(t--)
    {
        
    vector<int> v;
    sum=0;
    max_end_here = 0;
    max_sum_sofar = INT_MIN;
    cin>>n;

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
        if(v[i] > 0)
            sum += v[i];
    }

    if(max_sum_sofar == 0)
        max_sum_sofar = *max_element(v.begin(), v.end());

    if(sum == 0)
        sum = max_sum_sofar;
    cout<<max_sum_sofar<<" "<<sum<<endl;

    }

    return 0;
}