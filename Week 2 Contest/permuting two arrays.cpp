// Time Complexity - O(nlog n)
// Sapce Complexity - O(1)


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,k,q;
    int c;
    cin>>q;
    
    while(q--)
    {
        vector<int> v1;
        vector<int> v2;
        
        cin>>n>>k;
        c=0;
        
        for(i = 0; i < n ; i++)
        {
            int num;
            cin>>num;
            v1.push_back(num);
        }

        for(i = 0; i < n ; i++)
        {
            int num;
            cin>>num;
            v2.push_back(num);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());
        
        for(i = 0; i < n ; i++)
        {
            if(v1[i]+v2[i] < k)
                break;
            else
                c+=1;
        }

        if(c==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
