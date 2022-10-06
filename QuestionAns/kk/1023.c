#include<stdio.h>
int main()
{
    int a,b,i=1;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(i==1)
            printf("%d\n",a+b);
        else
            printf("\n%d\n",a+b);
        i++;

    }
}
/**************************************************************
	Problem: 1023
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

