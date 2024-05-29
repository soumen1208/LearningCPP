#include<iostream>
#include<string.h>
using namespace std;

void shiftchar(char str[], int sp)
{
  int n = strlen(str);

  for (int i = n-1; i>=0; i--)
  {
    str[i+sp] = str[i];
  }

  cout<<str<<endl;

  // step 2 : shift the last sp char to the strat.....

  n = strlen(str);

  int i =n-sp, j=0;
  while (i<n)
  {
    str[j]=str[i];
    i++;
    j++;
  }

  str[n-sp] = '\0';
  cout<<str;

}


int main()
{
    char str[100]="Hello";

    shiftchar(str, 2);

    return 0;
}