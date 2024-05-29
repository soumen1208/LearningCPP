#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[1000];

    cin>>str;

    for (int i=0; i<strlen(str); i++)
    {
        char currentChar = str[i];
        cout<<currentChar;

        char nextchar = str[i+1];

        if (i != strlen(str)-1)
        cout<<nextchar - currentChar;
    }
}
