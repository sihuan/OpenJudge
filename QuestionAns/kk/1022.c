#include<stdio.h>
int main()
{
    int a,b;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==0&&b==0)
            break;
        printf("%d\n",a+b);
    }
}
/**************************************************************
	Problem: 1022
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

