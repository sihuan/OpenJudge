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
        S=NULL;
        len=0;
    }
    STR(char *s):S(s)
    {
        int i=0;
        while(S[i]!='\0')
            i++;
        len=i;
    }
    int length(){return len;}
    void putline()
    {
        if(len==0)
            cout<<endl;
        else
        {
            cout<<S<<endl;
        }
    }
    STR operator+(const STR& s1)
    {
        STR s2;
        s2.S=new char[len+s1.len+1];
        for(int i=0;i<len;i++)
        {
            s2.S[i]=S[i];
        }
        for(int i=len;i<len+s1.len;i++)
        {
            s2.S[i]=s1.S[i-len];
        }
        s2.S[len+s1.len]='\0';
        s2.len=len+s1.len;
        return s2;
    }
    STR operator +=(const STR& s1)
    {
       return *this=*this+s1;
    }
};
int main()
{
    STR e;
    STR h("Hello World!");
    STR he = e + h;
    cout << he.length() << " ";
    he.putline();
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    e += h;
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();

    char s1[100001], s2[100001];
    while(gets(s1) != NULL && gets(s2) != NULL)
    {
        STR str1(s1), str2(s2);
        STR str = str1 + str2;
        cout << str.length() << " ";
        str.putline();
        cout << str1.length() << " ";
        str1.putline();
        cout << str2.length() << " ";
        str2.putline();
        str2 += str1;
        cout << str2.length() << " ";
        str2.putline();
        cout << str1.length() << " ";
        str1.putline();
    }
}

/**************************************************************
	Problem: 1579
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1604 kb
****************************************************************/

