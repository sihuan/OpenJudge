#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
class STR
{
    char *S;
    int len;
public:
    STR()
    {
        len=0;
    }
    STR(char *s)
    {
        len=strlen(s);
        S=new char[len+1];
        for(int i=0;i<len;i++)
        {
            S[i]=s[i];
        }
    }
    ~STR(){if(len!=0)delete []S;}
    int length(){return len;}
    void putline()
    {
        if(len==0)
            cout<<endl;
        else
        {
            for(int i=0;i<len-1;i++)
            {
                cout<<S[i];
            }
            cout<<S[len-1]<<endl;
        }
        }
};

int main()
{
    STR e;
    STR h("Hello World!");
    char s[100001];
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    while(gets(s) != NULL)
    {
        STR str(s);
        cout << str.length() << " ";
        str.putline();
    }
}

/**************************************************************
	Problem: 1578
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1288 kb
****************************************************************/

