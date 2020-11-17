#include <iostream> 
using namespace std;

int gcd(int a, int b) 
{
    return (b==0)?a:gcd(b,a%b);
} 

int main() 
{ 
	int a,b; 
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b; 
	cout<<"HCF/GCD is: "<<gcd(a,b);
	return 0; 
}
