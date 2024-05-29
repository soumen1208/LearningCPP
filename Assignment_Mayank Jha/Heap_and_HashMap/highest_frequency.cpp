// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int high_frequency(int arr[], int n)
// {
//     int k = 2;
//     int x = n/k;
//     unordered_map<int, int> freq;
//     for (int i=0; i<n; i++)
//     {
//         freq[arr[i]]++;
//     }

//     for(auto i: freq)
//     {
//         if(i.second >= x)
//         cout<<i.first<<endl;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n] = {};
//     for (int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     // int k=2;

//     high_frequency(arr, n);
// }

/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */



#include<iostream>
using namespace std;

int high(int arr[], int n)
{
    int maxcount=0;
    int maxfreq;
    for (int i=0; i<n; i++)
    {
        int count=0;
        for (int j=0; j<n; j++)
        {
            if (arr[i] == arr[j])
            count++;
        }

        if (count > maxcount)
       {
        maxcount=count;
        maxfreq=arr[i];
       }
    }

    return maxfreq;
}

int main()
{
    int n;
    cin>>n;
    int arr[n] = {};
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<high(arr, n);

}
