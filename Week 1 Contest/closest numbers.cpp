// Time Complexity - O(nlog n)
// Sapce Complexity - O(n)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,i;
    vector<int> v,v1;
    int diff;
    cin>>n;
    
    for(i = 0; i < n ; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    

    sort(v.begin(),v.end());
    
    diff = v[1] - v[0];
    
    for (i=0 ; i <n-1 ; i++){
        if(diff > v[i+1] - v[i]){
        diff = v[i+1] - v[i];
        }
    }
    
    for (i=0 ; i <n-1 ; i++){
        if(v[i+1]-v[i] == diff){
            v1.push_back(v[i]);
            v1.push_back(v[i+1]);
        }
    }
    
    for(i = 0; i < v1.size() ; i++)
    {
        cout<<v1[i]<<" ";
    }
    
    return 0;
}