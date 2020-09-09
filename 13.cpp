#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,sum=0,l,r;
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
    
    sort(v.begin(),v.end());
    
    l=0;
    r=n-1;
    
    while(l<=r)
    {
        sum = v[l] + v[r];
        if(sum == 0)
        {
            cout<<v[l]<<" & "<<v[r]<<endl;
            l++;
            r--;
        }
        else if(sum < 0)
            l++;
        else
            r--;
    }
    
    return 0;
}