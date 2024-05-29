#include <iostream>
using namespace std;
// int main()
// {
//     int arr[4] = {12, 34, -45, 35};  
//     int maxNo = INT8_MIN;
    
//     for (int i=0; i<4; i++){
//         if (maxNo <  arr[i])
//             maxNo=arr[i];
//     }

//     cout<<"the maximum no is: "<<maxNo<<"\n";

//     int minNo = 0;

//     for (int i=0; i<4; i++){
//         if (minNo>arr[i])
//         minNo=arr[i];
//     }

//     cout<<"the minimum no is: "<<minNo;
// }


int main ()
{
    int arr [] = {4,6,9,5};
    int max = INT8_MIN;

    for (int i=0; i<4; i++)
    {
        if (max<arr[i])
        max = arr[i];
    }

    cout<<max<<"\n";


    int min = INT8_MAX;

    for (int i=0; i<4; i++)
    {
        if (min>arr[i])
        min = arr[i];
    }

    cout<<min;
}