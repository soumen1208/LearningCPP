#include <iostream>
using namespace std;
int maxvalue(int arr[], int n)
{

    int max = arr[0];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];

        if (arr[i]>max)      
        max = arr[i];
    }

    return max;

}
int main()
{
    int n;
    cin>>n;
    
    int arr[n] = {};
    cout<<"the maximu nos is" << maxvalue(arr, n);
}
// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n];

//     int max = 0;

//     for (int i=0; i<n; i++)
//     {
//         cin>>arr[i];

//         if (arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }

//     cout<<"max element is: "<<max<<"\n";
// }