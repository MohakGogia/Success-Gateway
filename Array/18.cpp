#include <iostream>

using namespace std;

int main()
{
	int row,i,j,c;

	cout<<"Enter row: "<<endl;
	cin>>row;

    for(j = 1 ; j <= row ; j++)
    {
        c=1;
        for(i = 1 ; i <= j ; i++)
        {
            cout<<c<<" ";
            c = c * (j-i)/i;
        }
        cout<<endl;
    }

    return 0;

    // For directly printing a particular row of pascal triangle :-
    // cin>>row_no;
    // j=row_no;
    // c=1;
    // for(i = 1 ; i <= j ; i++)
    // {
    //     cout<<c<<" ";
    //     c = c * (j-i)/i;
    // }
    
}