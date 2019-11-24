#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c;
    char a,b;
    a=getchar();
    getchar();
    b=getchar();
   if(a>90)
    a=a-32;
   if(b>90)
    b=b-32;
    c=abs(a-b);


    printf("%d",c);

    return 0;
}

/**************************************************************
	Problem: 2229
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

