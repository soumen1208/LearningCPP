#include <iostream>
using namespace std;
// int main()
// {
//     char ch;
//     cin>>ch;

//     if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
//         cout<<"this is a alphabet"<<"\n";
    
//     }else if((ch>='0' && ch<='9')){
//         cout<<"this is a nuber"<<"\n";
//     }else{
//         cout<<"Nothing";
//     }


//     // compound assignment.............

//     // int a=5;
//     // // a=a+5;
//     // // short term..........
//     // a+=5;
//     // cout<<a;
    
  

//     return 0;
// }

void checkAlphabet (char ch)
{
    if (ch >= 'A' && ch<='Z' || ch>='a' && ch<='z')
    cout<<"this is alphabet";

    else if (ch>='0' || ch<='9')
    cout<<"this is numbers";

    else 
    cout<<"nothing";
}

int main()
{
    char ch;
    cin>>ch;

    checkAlphabet(ch);


}