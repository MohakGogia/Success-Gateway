// Time Complexity - O(n)
// Sapce Complexity - O(n)


#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int n,i,k;
    int v[1000000];
    int v1[1000000];
    int c=0;
    unordered_map<int, bool> umap; 
    
    cin>>n>>k;
    
    for(i = 0; i < n ; i++)
    {
        cin>>v[i];
        umap[v[i]]="true";
    }
    
    for(i = 0; i < n ; i++)
    {
        v1[i] = v[i] + k;
    }
    
    for(i = 0; i < n ; i++)
    {
        if (umap.find(v1[i]) != umap.end())
        c++;
    }
    
    cout<<c;
    
    return 0;
}
    