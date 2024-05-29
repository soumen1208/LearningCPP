/*
    RUNNING STREAM .....
    CALCULATION .....
*/

#include <iostream>
#include<queue>
using namespace std;

int main()
{
    char ch;
    cin>>ch; // input 1st char of stream......

    int freq[26] = {0};
 
    queue<char>q;
    q.push(ch);

    // running stream input......-(--) terminate stream

    while(ch != '-')
    {
        int idx = ch - 'a';
        freq[idx]++;

        while (!q.empty())
        {
            /* code */
            char charAtfront = q.front();
            int pos = charAtfront - 'a';

            if (freq[pos] > 1)
            {
                q.pop();
            }else{
                cout<<charAtfront;
                break;
            }
        }

        if (q.empty())
        cout<<"-1";

        q.push(ch);
        cin>>ch; 
    }

}