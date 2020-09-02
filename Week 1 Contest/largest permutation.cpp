// Time Complexity - O(n)
// Sapce Complexity - O(n)


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int n,i,k;
    cin>>n>>k;
    
    vector<int> v;
    v.resize(n);
    
    unordered_map<int, int> ind;

    for(i = 0; i < n ; i++)
    {
        cin>>v[i];
        ind[v[i]] = i;
    }
 
 
    for(i = 0; i < n; i++) {
        if(k == 0) {
            break;
        }
        if(v[i] == n-i) {
            continue;
        }
        ind[v[i]] = ind[n-i];
        v[ind[n-i]] = v[i];
        v[i] = n-i;
        k--;
    }
    
    for(i = 0; i < n ; i++)
    {
    cout<<v[i]<<" ";
    }
    
    return 0;
}
    