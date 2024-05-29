/*
       What is palindroeme? 
       => A palindrome is a word, number, pharse, or others sequence of symbols that reads the same backward and forward.
           EX= Madam <----- Madam; Nitin <---- Nitin.....etc.

*/

#include <iostream> 
#include <string.h>

using namespace std;
int main()
{   char str[100];
    cin>>str;

    bool isPalindrome=true;

    int i=0, j=strlen(str)-1;

    while (i<j)
    {
        if (str[i] != str[j])
        {
            isPalindrome=false;
            break;
        }

        i++;
        j--;
    }

    if (isPalindrome)
    cout<<"this is palindrome"<<"\n";
    else
    cout<<"not palindrome"<<"\n";

}