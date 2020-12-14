#include <iostream>
#include <stdio.h>
using namespace std;
class Expression{
public:
    int aa,bb;char cc;
 Expression(int aaa,int bbb,char op){
 aa=aaa;bb=bbb;cc=op;
 }
void show(){
    cout<<aa<<" "<<cc<<" "<<bb<<" "<<'='<<" ";
    if(cc=='+')
    cout<<aa+bb<<endl;
   else if(cc=='-')
    cout<<aa-bb<<endl;
   else if(cc=='*')
    cout<<aa*bb<<endl;
    else if(cc=='/')
    cout<<aa/bb<<endl;
}
};

int main()
{
    int N, i, a, b;
    char op;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        cin>>a>>op>>b;
        Expression exp(a, b, op);
        exp.show();
    }
    return 0;
}

/**************************************************************
	Problem: 2089
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

