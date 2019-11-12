#include<stdio.h>
int main()
{
    int a,b,c,s=0;
    scanf("%d%d%d",&a,&b,&c);
    if (a%2 == 0)
        s += a;
    else
        s += (a+1);
    if (b%2 == 0)
        s += b;
    else
        s += (b+1);
    if (c%2 == 0)
        s += c;
    else
        s += (c+1);
    printf("%d\n",s);
}

/**************************************************************
	Problem: 1402
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

