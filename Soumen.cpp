// #include <iostream>
// using namespace std;
// int main()
// {
//     int i=1;

//     int n;
//     cin>>n;


//     while (i*i <n){
//         i++;
//     }
//     if (i+i>n)
//         i--;
    
//     cout<<"Square root of "<<n << " is " << i<<endl;

//     // Whether is prime or not........................

//     int n;
//     cin>>n;
//     bool is_prime = true;

//     cout<<"put a number";
    



// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout <<"put 1st number: ";
//     cin >> a;
//     cout <<"put 2nd number: ";
//     int b;
//     cin >> b;
//     int sum = a+b;
//     cout<<"The sum of two numbers: " << sum;
//     return 0;

// #include <iostream>
// using namespace std;
// int main()
// {
//     // Maximum number ...............
//     int arr[4]={10,24,-2,50};
//     int n=4;

//     int minNo=__INT_MAX__;

//     for (int i=0; i<n; i++){
//         if (arr[i]<minNo)
//         minNo=arr[i];
//     }
//     cout<<"minimum value is"<<minNo;

    // Larger and lesser number ......................................

    #include <iostream>
    using namespace std;
    int main()
    {
        int a;
        int b;
        int c;

        cin>>a>>b>>c;

        if (a>b>c){
            cout<<"larger nos "<<a;
        }else if (a>c){
            cout<<"larger nos "<<a;
        }else if(b>a){
            cout<<"larger nos "<<b;
        }else if(b>c){
            cout<<"larger nos "<<b;
        }else{
            cout<<"c is larger";
        }

    }