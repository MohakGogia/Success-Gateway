// Time Complexity - O(nlog n)
// Sapce Complexity - O(n)


#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n,i,m,j;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    
    cin>>n;
    for(i = 0; i < n ; i++)
    {
        int num;
        cin>>num;
        v1.push_back(num);
    }
    
    cin>>m;
    for(i = 0; i < m ; i++)
    {
        int num;
        cin>>num;
        v2.push_back(num);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    i=j=0;
    
   while(j<m){
       if (v1[i] == v2[j]){
       i++;
       j++;
       }
       else
       {
           v3.push_back(v2[j]);
           j++;
       }
   }
    
    set<int> s; 
    
    for (i = 0; i < v3.size(); i++) { 
        s.insert(v3[i]); 
    } 
  
    set<int>::iterator it; 
  
    for (it = s.begin(); it != s.end(); ++it){
        cout << *it << " "; 
    }
    
    return 0;
}
    