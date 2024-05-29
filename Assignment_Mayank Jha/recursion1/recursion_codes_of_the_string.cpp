#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool nonLower(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if(!islower(s[i]))
        {
            return true;
        }
    }
    return false;
    
}

void printCode(vector<string> output)
{
    cout<<"[";
    for(int i =0; i<output.size(); i++)
    {
    if(nonLower(output[i]))
    continue;
    cout<<(output[i])<<", ";
    
    }

    cout<<"]";
}

char getChar(int n)
{
    return (char)(n+96);
}
vector<string>getCode(string str)
{
    if(str.size()==0)
    {
        vector<string> ans;
        ans.push_back("");
        return ans;
    }

    vector<string> output1 = getCode(str.substr(1));
    vector<string>output2(0);

    int firstDigit=(str[0] - '0');
    int firstTwoDigit = 0;

    if(str.size() >=2)
    {
        firstTwoDigit = (str[0] -'0') *10 + (str[1] -'0');

        if(firstTwoDigit>=10 && firstTwoDigit<=26)
        {
            output2 = getCode(str.substr(2));
        }
    }

    vector<string> output(output1.size() +
                          output2.size());
 
    int k = 0;
 
    for(int i = 0; i < output1.size(); i++)
    {
        char ch = getChar(firstDigit);
 
        output[i] = ch + output1[i];
        k++;
    }
 
    
    for(int i = 0; i < output2.size(); i++)
    {
        char ch = getChar(firstTwoDigit);
 
        output[k] = ch + output2[i];
        k++;
    }
 
    return output;
}

int main()
{
    string intput;
    cin>>intput;
    vector<string> output = getCode(intput);

    printCode(output);

}


//   -----------------------------------------------------------------------------------------------------------------

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// bool nonLower(string s)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         /* code */
//         if(!islower(s[i]))
//         {
//             return true;
//         }
//     }
//     return false;
    
// }

void printCode(vector<string> output)
{
    cout<<"[";
    bool first = true;
    for(int i =0; i<output.size(); i++){
        if (!first) {
            cout << ", ";
        }
        cout << output[i];
        first = false;
    }

    cout<<"]";
}

char getChar(int n)
{
    return (char)(n+96);
}
vector<string>getCode(string str)
{
    if(str.size()==0)
    {
        vector<string> ans;
        ans.push_back("");
        return ans;
    }

    vector<string> output1 = getCode(str.substr(1));
    vector<string>output2(0);

    int firstDigit=(str[0] - '0');
    int firstTwoDigit = 0;

    if(str.size() >=2)
    {
        firstTwoDigit = (str[0] -'0') *10 + (str[1] -'0');

        if(firstTwoDigit>=10 && firstTwoDigit<=26)
        {
            output2 = getCode(str.substr(2));
        }
    }

    vector<string> output(output1.size() +
                          output2.size());
 
    int k = 0;
 
    for(int i = 0; i < output1.size(); i++)
    {
        char ch = getChar(firstDigit);
 
        output[i] = ch + output1[i];
        k++;
    }
 
    
    for(int i = 0; i < output2.size(); i++)
    {
        char ch = getChar(firstTwoDigit);
 
        output[k] = ch + output2[i];
        k++;
    }
 
    return output;
}

int main()
{
    string intput = "1125";
    vector<string> output = getCode(intput);

    printCode(output);

}