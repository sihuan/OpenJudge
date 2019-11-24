#include<stdio.h>
int main()
{
    int a,b,i;
    char c;
    while(scanf("%d%c%d",&a,&c,&b))
    {
        if(c=='+')
        printf("%d\n",a+b);
        else if(c=='-')
        printf("%d\n",a-b);
        else if(c=='*')
        printf("%d\n",a*b);
        else if(c=='/')
        printf("%d\n",a/b);
        else if(c=='%')
        printf("%d\n",a%b);
        else if(a==0&&c==' '&&b==0)
            break;
        else
            printf("invalid op\n");

    }

    return 0;
}
/**************************************************************
	Problem: 1026
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

