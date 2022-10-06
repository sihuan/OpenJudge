#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    while(1)
    {
        scanf("%d%c%d",&a,&ch,&b);
        if(a==0&&b==0&&ch==' ')
            break;
        if(ch=='+')
            printf("%d\n",a+b);
        else if(ch=='-')
            printf("%d\n",a-b);
        else if(ch=='*')
            printf("%d\n",a*b);
        else if(ch=='/')
            printf("%d\n",a/b);
        else if(ch=='%')
            printf("%d\n",a%b);
        else
            printf("invalid op\n");
    }
}

/**************************************************************
	Problem: 1026
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

