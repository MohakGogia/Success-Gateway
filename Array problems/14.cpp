#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n,i,sum=0,l,r,j;
    vector<int> v;
    int min_sum = INT_MAX;

    cout<<"Enter n: "<<endl;
    cin>>n;
    
    cout<<"Enter array: "<<endl;
    for(i = 0; i < n ; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    sort(v.begin(),v.end());
    
    l=0;
    r=n-1;
    
    while(l<r)
    {
        sum = v[l] + v[r];
        if( abs(sum) < abs(min_sum) )
        {
            min_sum = sum;
            i=l;
            j=r;
            l++;
            r--;
        }
        else if(sum < 0)
            l++;
        else
            r--;
    }

    cout<<v[i]<<" & "<<v[j];
    
    return 0;
}