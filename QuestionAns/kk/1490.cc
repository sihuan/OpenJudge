#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <cstring>

using namespace std;

char code[26][6]={"2\0","22\0","222\0","3\0","33\0","333\0","4\0","44\0","444\0","5\0","55\0","555\0","6\0","66\0","666\0","7\0","77\0","777\0","7777\0","8\0","88\0","888\0","9\0","99\0","999\0","9999\0"};

int main()
{
    char str[20001];
    while(gets(str))
    {
        if(isspace(str[0]))
            cout<<0;
        else
            cout<<code[str[0]-'A'];
        int i=1;
        while(str[i])
        {
            if(isspace(str[i]))
                cout<<0;
            else
            {
                if(code[str[i-1]-'A'][0]==code[str[i]-'A'][0])
                    cout<<1;
                cout<<code[str[i]-'A'];
            }
            i++;
        }
        cout<<endl;
    }
}
/**************************************************************
	Problem: 1490
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

