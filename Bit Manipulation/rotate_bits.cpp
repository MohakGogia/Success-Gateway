#include <iostream> 
#define INT_BITS 32
using namespace std;

int leftRotate(int n, unsigned int d) 
{ 
    return (n << d)|(n >> (INT_BITS - d)); 
}

int rightRotate(int n, unsigned int d) 
{ 
    return (n >> d)|(n << (INT_BITS - d)); 
} 

int main() 
{ 
	int n;
    unsigned int d; 
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<"Enter d: "<<endl;
    cin>>d; 
	cout<<"Left Rotation of bits by "<<d<<": "<<leftRotate(n,d)<<endl;
	cout<<"Right Rotation of bits by "<<d<<": "<<rightRotate(n,d); 
	return 0; 
}
