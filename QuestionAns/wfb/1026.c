#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    char ch;
    int a,b;
    while(1)
    {
        scanf("%d%c%d",&a,&ch,&b);
        if(a==0 && ch==' ' && b==0) break;
        switch(ch)
        {
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            printf("%d\n",a/b);
            break;
        case '%':
            printf("%d\n",a%b);
            break;
        default:
            printf("invalid op\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1026
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

