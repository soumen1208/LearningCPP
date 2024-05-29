#include <iostream>
using namespace std;

int  kadane(int arr[], int n)
{
    int currentSum=0, maxSum=INT8_MIN;

    for (int i=0; i<n; i++)
    {
        int currentElement = arr[i];
        
        if (currentElement+currentSum > 0)
        currentSum = currentSum + currentElement;
        else
        currentSum = 0;

        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{

    int arr[] = {2,3,5,7,4};
    int n=5;
    int ans = kadane (arr, n);
    cout<<"maxsum is: "<<ans<<"\n";
    
}