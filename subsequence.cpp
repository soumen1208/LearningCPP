/*
        subsequence of the string......
        "abc"

*/
#include <iostream>
using namespace std;

void subsequence (string input, string ans, int Idx)
{

    if (Idx == input.length())
    {
        cout<<ans<<" ";
        return;
    }
    // exclude of the current char...
    char ch = input[Idx];

    subsequence(input, ans, Idx+1);

    // include of the current char.......
    subsequence (input, ans+ch, Idx+1);

}
int main()
{
    string str = "abc";

    subsequence(str,"", 0);
    
}