#include<stdio.h>
int main()
{
    int a,b,c,i=1;
    scanf("start = %d, step = %d, times = %d",&a,&b,&c);
    printf("%d",a);
    a=a+b;
    while(i<c)
    {
        printf(" %d",a);
        a+=b;
        i++;
    }

}
/**************************************************************
	Problem: 1090
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

