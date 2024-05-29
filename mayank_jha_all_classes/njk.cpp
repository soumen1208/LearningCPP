#include <iostream>
using namespace std;

bool isTripletExist(int nums[], int n, int target)
{
   int result=0, temp =0; 
  for (int i = 0; i < n; i++) {
        
       temp = 0;
        for (int j = i; j < n; j++) {
            
            temp += nums[j];
            result += temp;
        }

        if (result % 10 == 3)
        {
            
        }


    }

}
 
int main()
{
    int n;
    cin>>n;

    int nums[] = {};
    for (int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int target = 3;
 
    isTripletExist(nums, n, target, 0) ? cout << "YES":
                                cout << "NO";
 
    return 0;
}
