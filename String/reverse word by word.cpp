#include <iostream>

using namespace std;

void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end)
    {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

void reverseWordByWord(char* s)
{
    char* word_begin = s;
    char* temp = s;
    while (*temp != '\0')
    {
        temp++;
        if (*temp == '\0')
        {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ')
        {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    reverse(s, temp - 1);
}

int main()
{
    char str[30];
    cout<<"Enter String:";
    cin.getline(str, 30);
    reverseWordByWord(str);
    cout<<"\nReversed String : "<<str;
    return 0;
}
