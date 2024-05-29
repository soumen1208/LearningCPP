#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char str[50];
    cin>>str;

    //cin.getline(str, 50, '\n');

    int i=0;

    while(str[i] != '\0')
    {
        i++;
    }

    cout<<"length of the arrays is: "<<strlen(str);

}