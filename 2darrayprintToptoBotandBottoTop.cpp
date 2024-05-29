#include <iostream>
using namespace std;
int main()
{

    /*
                  1 2 3          1 4 7
                  4 5 6   ---->  8 5 2 
                  7 8 9          3 6 9
    */

    int arr[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};
ṇ
    int colNo = 0;
    int n = 3;

    while (colNo < n ) 
    {
       if (colNo %2 == 0)
       {
         // print top to down......

         int rowNo = 0;

         while (rowNo < n)
         {
            cout<< arr[rowNo] [colNo] <<" ";
            rowNo++;
         }

         cout<<"\n";
       }else{
              // print down to top .........

            int rowNo= n-1;
            while (rowNo >=0)
            {
                cout<<arr[rowNo] [ colNo]<<" ";
                rowNo--;
            }

            cout<<"\n";
       }

       colNo++;

    }
}