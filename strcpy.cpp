#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[10] = "Soumen";

    char copy[10];

    strcpy(copy, str);
    cout<<copy;
}