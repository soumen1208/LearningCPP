#include <iostream>
using namespace std;
int main()
{
    int vikas =24;
    int ravi =22;
    int gouri = 25;
    int deoo = 23;

    // dataType name of Array [size]
    // declaration of an arry
    int arr[3];

    // initialisation = declaration + assignment

    int myArray[4] = {24,22,25,23};

    int a[] = {2,4,5};

    int n=sizeof(a)/sizeof (a[0]);

    // Array can hold multiple homogenous value.
    // accessing value inside array
    // arrayname [indxnumber] {imdices -> 0 to n-1}
    // cout<<myarray[0]<<endl<<myarray[1]<<endl................................<<endl
    // if size is large
    //loop will be helpful in that

    // iterating an array

    for (int i=0; i<4; i++)
    {
    cout<<myArray[i]<<"\n";
    }

}