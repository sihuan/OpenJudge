#include <iostream>
#include<stdio.h>

using namespace std;
int getlength(const char *arr)
{
    int l=0;
    for(int i=0; arr[i]!='\0'; i++)
        l++;
    return l;
}
void copys(char *arr, const char *brr)
{
    int l=getlength(brr);
    for(int i=0; i<l; i++)
        arr[i]=brr[i];
        arr[l]='\0';
}
class STR
{
public :
    char *arr;
    int l;
    STR():arr(NULL),l(0){}
    STR(const char *brr)
    {
        l=getlength(brr);
        arr=new char[l+1];
        copys(arr,brr);
    }
    int length()
    {
        return l;
    }
    void putline()
    {
        for(int i=0; i<l; i++)
            cout<<arr[i];
        cout<<endl;
    }
    ~STR()
    {
        delete []arr;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1284 kb
****************************************************************/

