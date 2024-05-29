#include <iostream>
#include <string.h>
using namespace std;
int specialSubstring(int n, string s) {
   // Write your code here.



   int result = 0;

   int sameChar[n] = {0};

   int i = 0;

   while (i<n)
   {
      int sameCharCount =1;
      int j=i+1;

      while (s[i] == s[j] && j<n)
      sameCharCount++, j++;



      result += (sameCharCount*(sameCharCount+1)/2);

      sameChar[i] = sameCharCount;

      i=j;
   }

   for (int j=1; j<n; j++)
   {
      if (s[j] == s[j-1])
      sameChar[j] = sameChar[j-1];


      if (j>0 && j<(n-1) && (s[j=1]== s[j+1] && s[j] != s[j-1]))

      result += min(sameChar[j-1], sameChar [j+1]);
   }

   return result-n;


}
int main()
{
   string str = "ABC";
   int n = str.length();
   cout<<specialSubstring(n, str);
   return 0;

}