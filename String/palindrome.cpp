#include <iostream>
#include <cstring>

using namespace std;

int palindrome(char *s)
{
    int i = 0, j = strlen(s)-1;
    while(i < j)
    {
        if(s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char str[30];
    cout<<"Enter String:";
    cin.getline(str, 30);
    int res = palindrome(str);
    (res == 1)?cout<<"\nPalindrome String":cout<<"\nNot Palindrome";
    return 0;
}
