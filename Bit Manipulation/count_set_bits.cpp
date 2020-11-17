#include <iostream> 
using namespace std;

unsigned int countSetBits(int n) 
{ 
    unsigned int count = 0; 
    while(n)
    { 
        n = n & (n-1); 
        count++; 
    }
    return count; 
}

int main() 
{ 
	int n; 
    cout<<"Enter: "<<endl;
    cin>>n; 
	cout<<countSetBits(n); 
	return 0; 
}
