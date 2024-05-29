/*
      1 5 3 2 5 6 4 3 2
      next permutation ........
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void next_permutation (vector<int> &arr)
{
    int n = arr.size();

    bool lexographicallyLargest = true;

    int pos1 = 0;
    int pos2 = 0;
    for (int i=n-2; i>=0; i--)
    {
        if (arr[i]<arr[i+1])
        {
            lexographicallyLargest = false;
            pos1 = i;   // I have found the curlpit
            break;
        }
    }

    for (int i=n-1; i>=0; i--)
    {
        if (arr[pos1]< arr[i])
        {
            pos2 = i;
            break;

        }
    }

    if (lexographicallyLargest)
    {
        sort(arr.begin(), arr.end());
        return;
    }

    swap(arr[pos1], arr[pos2]);

    sort(arr.begin()+pos1+1, arr.end());

}

int main()
{
    vector<int>arr = {3,2,1};
    //int n=sizeof(arr)/sizeof(arr[0]);

    next_permutation(arr);

    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
 
}