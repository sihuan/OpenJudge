#include<stdio.h>
int main()
{
    int a,b,c,i=1;
    char d,e;
    scanf("%d %c %c%d%d",&a,&d,&e,&b,&c);
    while(i<=c)
    {
        printf("%d%02d%02d%02d%02d\n",a,d-64,e-64,b,i);
        i++;
    }
}
/**************************************************************
	Problem: 1425
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

