#include <iostream>
#include <string.h>
using namespace std;

void permutation (char str[], int pos)
{
  if (pos == strlen(str))
  {
    cout<<str<<endl;
    return;
  }

  for (int i=pos; i<strlen(str); i++)
  {
    int tmp1 = str[pos];
    str[pos] = str[i];
    str[i] = tmp1;

    permutation (str, pos+1);

    // Backtrack for change the position......
    int tmp2 = str[pos];
    str[pos] = str[i];
    str[i] = tmp2;

  }
}
int main()
{
  char str[] = "aba";

  cout<<"Permutation of 'abc' is: "<<"\n";

  permutation(str, 0);

}