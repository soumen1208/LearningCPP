#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char largestChararray[100];
    int largestlength = INT8_MIN;
 
    for (int i=0; i<n; i++)
    {
        cout<<"enter the"<<i+1<<"char array: ";

        char currentChararray[100];
        cin.getline(currentChararray, 100, '.');

        int length = strlen(currentChararray);

        if (length > largestlength)

        {
            largestlength = strlen(currentChararray);
            strcpy(largestChararray, currentChararray);
          
            
        }
    }

    cout<<"largest charcter array: "<<largestChararray<<endl;
    cout<<"length of the array is: "<<largestlength<<endl;
}
