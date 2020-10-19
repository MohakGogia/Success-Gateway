#include <iostream>
#include <cstring>

using namespace std;

void replace(char *s)
{
    int i = 0;
    int length = strlen(s);
    int spacecount = 0;
    while(s[i])
    {
        if(s[i] == ' ')
            spacecount++;
    }
    int new_length = length + spacecount*2;
    s[new_length] = '\0';
    i = length-1;
    while(i>=0)
    {
        if(s[i] == ' ')
        {
            s[--new_length] = '0';
            s[--new_length] = '2';
            s[--new_length] = '%';
        }
        else
        {
            s[--new_length] = s[i];
        }
        i--;
    }
}

int main()
{
    char str[30];
    cout<<"Enter String:";
    cin.getline(str, 30);
    replace(str);
    cout<<"\nReplaced String : "<<str;
    return 0;
}
