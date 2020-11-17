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

int FlippedCount(int a, int b) 
{
    return countSetBits(a^b); 
} 

int main() 
{ 
	int a,b; 
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b; 
	cout<<"No.of flipped bits: "<<FlippedCount(a,b);
	return 0; 
}
