// #include <iostream>
// using namespace std;

// void rotate (int arr[], int n, int sp)
// {
//     // shift all numbers right by nos......
//     sp = sp % n;

//     for (int i=0; i<n; i++)
//     {

//        // cin>>arr[i];

//         if (i<sp)
//         {
            
//             cout<<arr[n+i-sp]<<" ";
//         }

//         else
//         {
//             cout<<arr[i-sp]<<" ";
//         }
//     }
// }
// int main()
// {
//     int arr [] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     // int n;
//     // cin>>n;

//     // int sp;
//     // cin>>sp;

//     // int arr[n] = {};
//     // cin>>arr[n];

//     // int arr [] = {1,2,3,4,5};
//     // int n = 5;

//     rotate(arr, n, 2);
// }



// // #include <iostream>
// // #include <string.h>
// // using namespace std;
// // void rotate (char str[], int sp)
// // {
// //     int n = strlen(str);

// //     //shift all the character to right by the space 

// //     for (int i =n-1; i>=0; i--)
// //     {
// //         str[i+sp] = str[i];
// //     }
// //     cout<<str;
// // }
// // int main()
// // {
// //    char str[100] = "hello";

// //    rotate(str, 2);

// // }



#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 1, 3, 5, 7, 9, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; //No. of rotations
    k = k % n;
    int i, j;
    // Reverse last k numbers
    for (i = n - k, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (i = 0, j = n - k - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout<<arr[i];

    return 0;
}