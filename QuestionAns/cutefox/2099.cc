#include <iostream>
#include <stdio.h>
using namespace std;
class Logical{
public:
    int aa,bb;char cc;
Logical(int aaa,int bbb,char op){
 aa=aaa;bb=bbb;cc=op;
 }
void show(){
    cout<<aa<<" "<<cc<<" "<<bb<<" "<<'='<<" ";
    if(cc=='+')
    {
        if(aa!=bb)
         cout<<1<<endl;
        else
            cout<<0<<endl;
    }
 
   else if(cc=='-')
   {
       if(aa==bb)
         cout<<1<<endl;
        else
            cout<<0<<endl;
 
   }
 
   else if(cc=='*')
   {
       if(aa==1&&bb==1)
         cout<<1<<endl;
        else
            cout<<0<<endl;
   }
    else if(cc=='/')
    {
        if(aa==1||bb==1)
         cout<<1<<endl;
        else
            cout<<0<<endl;
    }
 
}
};

int main()
{
    int a, b;
    char ch;
    while (cin>>a>>ch>>b)
    {
        Logical log(a, b, ch);
        log.show();
    }
    return 0;
}

/**************************************************************
	Problem: 2099
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

