#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4,6,7,3,6};
    int n1 = sizeof (arr)/sizeof (arr[0]);
    int target1 = 6;

    for (int i=0; i<n1; i++){
        if (arr[i] == target1){
        cout<<"element found at "<<i<<"\n";
        break;
        }
    }


    int arr2[] = {5,6,7,8,3};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int target2 = 8;

    for (int j=0; j<n2; j++)
    {
        if (arr2[j] == target2)
        {
            cout<<"target2 element is: "<<j;
            break;
        }
    }
}