#include <iostream>

using namespace std;

int main()
{
    int q;
    string s;
    
    cin>>q;
    
    while(q--)
    {
        cin>>s;
        int i, count=0;
        for(i = 1; i < s.size() ; i++)
        {
            if( s[i] == s[i-1] )
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
