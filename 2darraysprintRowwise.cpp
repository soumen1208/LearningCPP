#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
     
    int n = 3;
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<arr[i][j]<< " ";
        }

        cout<<"\n";
    }
    
    cout<< " here the print row wise:" << endl;
    for (int j=0; j<n; j++)
    {
        for (int i=0; i<n; i++)
        {
            cout<<arr[i][j] << " ";
        }

        cout<<"\n";
    }

}