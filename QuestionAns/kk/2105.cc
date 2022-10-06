#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 
class MyString
{
public:
    char mystr[1001];
    void input()
    {
        cin >> mystr;
    }
    void output()
    {
        int len,flag=1;
        len=strlen(mystr);
        for(int i=0,j=len-1;i<=j;i++,j--)
            if(mystr[i]!=mystr[j])
                flag=0;
        if(!flag)
            cout << mystr;
        else
        {
            if(len%2==0)
                for(int i=0;i<len/2;i++)
                    printf("%c",mystr[i]);
            else
                for(int i=0;i<len/2+1;i++)
                    printf("%c",mystr[i]);
        }
        cout << endl;
    }
};
int main()
{
    MyString str;
    int n, i;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        str.input();
        str.output();
    }
    return 0;
}

/**************************************************************
	Problem: 2105
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

