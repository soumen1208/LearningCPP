#include <iostream>
#include <string.h>
using namespace std;

void replacePi (string str, int pos, string ans)
{
    // base condition ....
    if (pos >= str.length())
    {
        cout<<ans;
        return;
    }
    if (str[pos] == 'p' && str[pos+1] == 'i')
    {
        ans += "3.14";
        pos += 2;
    }else{
        ans += str[pos];
        pos += 1;
    }

    replacePi(str, pos, ans);
    
}
int main()
{
    string str = "abpcpidepif";

    replacePi(str, 0, "");

}