#include <iostream>
#include <string.h>
using namespace std;

bool isAnagram (char str1[], char str2[])
{
    int n1 = strlen(str1), n2 = strlen(str2);

    if (n1 != n2)
    return false;
// frequency arr for str1 & str2;
    int freq1[26] = {0}, freq2[26] = {0};

    // maintain freq array for str1.

    for (int i=0; i<26; i++)
    {
        char ch = str1[i];
        int idx = ch - 'a';

        freq1[idx]++;
    }
// maintain freq array for str2 
    for (int i=0; i<26; i++)
    {
      char ch = str2[i];
      int idx = ch-'a';

      freq2[idx]++;   
    }

    // check whether freq1 array and freq2 array are identical 

    for (int i=0; i<26; i++)
    {
        if (freq1[i] != freq2[i])

        return false;
    }

    return true; 
}
int main()
{
    char str1[100] = "abcd";
    char str2[100] = "dcba";

    if (isAnagram(str1,str2))
    cout<<"BOTH ARE ANAGRAM";
    else
    cout<<"NOT ANAGRAM";
}