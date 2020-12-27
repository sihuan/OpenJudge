#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   int a,b;
    char c;
    while(scanf("%d%c%d",&a,&c,&b)!=EOF)
    {
        if(a==0&&b==0&&c==' ')
            break;
        else
        {
                if(c=='+')printf("%d\n",a+b);
 
                else if(c=='-')printf("%d\n",a-b);
 
                else if(c=='*')printf("%d\n",a*b);
 
                else if(c=='/')printf("%d\n",a/b);
 
                else if(c=='%')printf("%d\n",a%b);
 
                else printf("invalid op\n");
 
 
        }
 
    }
    }
/**************************************************************
	Problem: 1026
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

