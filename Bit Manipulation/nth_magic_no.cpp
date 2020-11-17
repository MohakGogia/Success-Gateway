#include <iostream> 
using namespace std;

int nthmagicno(int n) 
{ 
    int res = 0, pow = 1; 
    while(n)
    { 
        pow = pow*5;
        if(n&1) 
            res = res + pow;
        n = n>>1; 
    }
    return res; 
}

int main() 
{ 
	int n; 
    cout<<"Enter: "<<endl;
    cin>>n; 
	cout<<nthmagicno(n); 
	return 0; 
}
