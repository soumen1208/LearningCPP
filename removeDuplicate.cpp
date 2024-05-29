#include <iostream>
#include <string.h>
using namespace std;

char removeDuplicate (char str[])
{
    int n = strlen(str);
    for (int i=0; i<strlen(str); i++)
    {
        char ch = str[i];

       while (ch==str[i+1])
        {
            i++;
        }

        cout<<ch;
    }
}
int main()
{
    char str[100] = "aaaabbbccd";

    removeDuplicate(str);

    return 0;
}