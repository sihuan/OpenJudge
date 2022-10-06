#include<stdio.h>
int main()
{
    int i=0,j=0,a,b;
    char s;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        i++;
    }
    scanf("\n");
    scanf("%c",&s);
    while(1)
    {
        scanf("%d",&b);
        if(b==0)
            break;
        j++;
    }
    if(s=='+')
        printf("%d",i+j);
    if(s=='-')
        printf("%d",i-j);
}
/**************************************************************
	Problem: 1475
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

