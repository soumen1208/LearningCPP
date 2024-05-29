#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;

    if (ch == ('a'&&'e'&&'i'&&'o'&&'u'&&'A'&&'E'&&'I'&&'O'&&'U')){
        cout<<"this is a vowel";
    }else{
        cout<<"this is a consonent";
    }

    return 0;
}