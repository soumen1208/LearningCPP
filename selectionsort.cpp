#include <iostream> 
using namespace std;
int main()
{
    int arr[] = {5,7,3,4,2,8,1};
    int n=7;

    for (int i=0; i<n; i++)
    {
        int smallest = arr[i];
        int pos = i;

        for (int j=i+1; j<n; j++)
        {
            if (arr[j]<smallest)
            {
                smallest = arr[j];
                pos = j;
            }
        }

        int tmp = arr[i];
        arr[i]=arr[pos];
        arr[pos]=tmp;
    }

    cout<<endl;

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}