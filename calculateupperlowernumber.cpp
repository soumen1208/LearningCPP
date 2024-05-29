#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char message[100];

    cin.getline(message, 100, '\n');

    int i=0;
    int uppercase=0, lowercase=0, noscount=0, specialch=0;

    while(message[i] != '\0')
    {
        char currentChar = message[i];

        if (currentChar>='A' && currentChar<='Z')
        uppercase++;

        else if (currentChar>='a' && currentChar<='z')
        lowercase++;

        else if (currentChar>='0' && currentChar<='9')
        noscount++;

        else
        specialch++;

         i++;

    }    
    cout<<"the uppercase count is: "<<uppercase<<"\n";
    cout<<"the lowercase count is: "<<lowercase<<"\n";
    cout<<"the noscount is: "<<noscount<<"\n";
    cout<<"the specialch is: "<<specialch<<"\n";
    cout<<"length of the array is: "<<strlen(message);
     

}