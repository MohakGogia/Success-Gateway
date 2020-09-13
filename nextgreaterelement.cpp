#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int i,n;
    vector<int> v;
    stack<int> stack;
    
    cout<<"Enter n: "<<endl;
    cin>>n;

    vector<int> nge;
    nge.resize(n);

    cout<<"Enter array: "<<endl;
    for(i = 0; i < n ; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    stack.push(v[n-1]);
    nge[n-1]=-1;
    
    for(i=n-2;i>=0;i--)
    {
        while(stack.size() > 0 && v[i] >= stack.top()){
            stack.pop();
        }

        if(stack.size() == 0){
            nge[i]=-1;
        }
        else{
            nge[i]=stack.top();
        }
        
        stack.push(v[i]);
    }

    for(i = 0; i < n ; i++)
    {
        cout<<nge[i]<<" ";
    }
    
    return 0;
}