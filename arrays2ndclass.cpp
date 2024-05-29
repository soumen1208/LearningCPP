 #include <iostream> 
 using namespace std;
 int main()
{
    cout<<"enter number of array: ";
    int n;
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++){
        cout<<"enter "<<i<<" ith element: ";
        int ele;
        cin>>ele;
        arr[i]= ele;
    }
    cout<<endl;

    for (int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
}