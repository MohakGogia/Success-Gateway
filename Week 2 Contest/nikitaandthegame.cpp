// Time Complexity - O(nlog n)
// Sapce Complexity - O(1)

#include <iostream>
#include <vector>

using namespace std;

int game(vector<int> v, int start, int end)
{
    if(start == end)
        return 0;   
    
    long long sum=0;
    
    for (int i = start; i < end ; i++)
    {
        sum += v[i];
    }
    
    if(sum == 0)
        return end - start - 1;
    if (sum%2 != 0)
        return 0;
    
    long long temp=0, s=0;
    temp = sum/2;
    
    for(int i=start;i<end;i++)
    {
        s += v[i];
        if(s==temp)
            return 1+max(game(v,start,i+1),game(v,i+1,end));
    }

    return 0;
}

int main()
{
    int i,n,t;
    cin>>t;

    while(t--)
    {

    cin>>n;
    vector<int> v;
    
    for(i = 0; i < n ; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    int score = game(v,0,n);
    cout<<score<<endl;
    }

    return 0;   
}
